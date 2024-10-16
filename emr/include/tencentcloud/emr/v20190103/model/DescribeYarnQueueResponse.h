/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEYARNQUEUERESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEYARNQUEUERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeYarnQueue返回参数结构体
                */
                class DescribeYarnQueueResponse : public AbstractModel
                {
                public:
                    DescribeYarnQueueResponse();
                    ~DescribeYarnQueueResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取队列信息。是一个对象转成的json字符串，对应的golang结构体如下所示，例如`QueueWithConfigSetForFairScheduler`的第一个字段`Name`：```Name                         string                               `json:"name"` //队列名称```- `Name`：字段名- `string`：字段类型- `json:"name"`：表示在序列化和反序列化`json`时，对应的`json key`，下面以`json key`来指代- `//`：后面的注释内容对应页面上看到的名称字段类型以`*`开头的表示取值可能为json规范下的null，不同的语言需要使用能表达null的类型来接收，例如java的包装类型；字段类型以`[]`开头的表示是数组类型；`json key`在调用`ModifyYarnQueueV2 `接口也会使用。- 公平调度器```type QueueWithConfigSetForFairScheduler struct {	Name                         string                               `json:"name"` //队列名称	MyId                         string                  `json:"myId"` // 队列id，用于编辑、删除、克隆时使用	ParentId                     string                  `json:"parentId"`  // 父队列Id	Type                         *string                              `json:"type"` // 队列归属。parent或空，当确定某个队列是父队列，且没有子队列时，才可以设置，通常用来支持放置策略nestedUserQueue	AclSubmitApps                *AclForYarnQueue                     `json:"aclSubmitApps"` // 提交访问控制	AclAdministerApps            *AclForYarnQueue                     `json:"aclAdministerApps"` // 管理访问控制	MinSharePreemptionTimeout    *int                                 `json:"minSharePreemptionTimeout"` // 最小共享优先权超时时间	FairSharePreemptionTimeout   *int                                 `json:"fairSharePreemptionTimeout"` // 公平份额抢占超时时间	FairSharePreemptionThreshold *float32                             `json:"fairSharePreemptionThreshold"` // 公平份额抢占阈值。取值 （0，1]	AllowPreemptionFrom          *bool                                `json:"allowPreemptionFrom"`                                        // 抢占模式	SchedulingPolicy             *string                              `json:"schedulingPolicy"`  // 调度策略，取值有drf、fair、fifo	IsDefault                    *bool                                `json:"isDefault"` // 是否是root.default队列	IsRoot                       *bool                                `json:"isRoot"` // 是否是root队列	ConfigSets                   []ConfigSetForFairScheduler          `json:"configSets"` // 配置集设置	Children                     []QueueWithConfigSetForFairScheduler `json:"queues"` // 子队列信息。递归}type AclForYarnQueue struct {	User  *string `json:"user"` //用户名	Group *string `json:"group"`//组名}type ConfigSetForFairScheduler struct {	Name              string        `json:"name"` // 配置集名称	MinResources      *YarnResource `json:"minResources"` // 最小资源量	MaxResources      *YarnResource `json:"maxResources"` // 最大资源量	MaxChildResources *YarnResource `json:"maxChildResources"` // 能够分配给为未声明子队列的最大资源量	MaxRunningApps    *int          `json:"maxRunningApps"` // 最高可同时处于运行的App数量	Weight            *float32      `json:"weight"`                   // 权重	MaxAMShare        *float32      `json:"maxAMShare"` // App Master最大份额}type YarnResource struct {	Vcores *int `json:"vcores"`	Memory *int `json:"memory"`	Type *string `json:"type"` // 当值为`percent`时，表示使用的百分比，否则就是使用的绝对数值}```- 容量调度器```type QueueForCapacitySchedulerV3 struct {	Name                       string                `json:"name"` // 队列名称	MyId                       string                `json:"myId"` // 队列id，用于编辑、删除、克隆时使用	ParentId                   string                `json:"parentId"` // 父队列Id	Configs                    []ConfigForCapacityV3 `json:"configs"` //配置集设置	State                      *string         `json:"state"` // 资源池状态	DefaultNodeLabelExpression *string               `json:"default-node-label-expression"` // 默认标签表达式	AclSubmitApps              *AclForYarnQueue      `json:"acl_submit_applications"` // 提交访问控制	AclAdminQueue              *AclForYarnQueue      `json:"acl_administer_queue"` //管理访问控制	MaxAllocationMB *int32 `json:"maximum-allocation-mb"` // 分配Container最大内存数量	MaxAllocationVcores *int32                         `json:"maximum-allocation-vcores"` // Container最大vCore数量	IsDefault           *bool                          `json:"isDefault"`// 是否是root.default队列	IsRoot              *bool                          `json:"isRoot"` // 是否是root队列	Queues              []*QueueForCapacitySchedulerV3 `json:"queues"`//子队列信息。递归}type ConfigForCapacityV3 struct {	Name                string          `json:"configName"` // 配置集名称	Labels              []CapacityLabel `json:"labels"` // 标签信息	MinUserLimitPercent *int32          `json:"minimum-user-limit-percent"` // 用户最小容量	UserLimitFactor     *float32        `json:"user-limit-factor" valid:"rangeExcludeLeft(0|)"`  // 用户资源因子	MaxApps *int32 `json:"maximum-applications" valid:"rangeExcludeLeft(0|)"` // 最大应用数Max-Applications	MaxAmPercent               *float32 `json:"maximum-am-resource-percent"` // 最大AM比例	DefaultApplicationPriority *int32   `json:"default-application-priority"` // 资源池优先级}type CapacityLabel struct {	Name        string   `json:"labelName"`	Capacity    *float32 `json:"capacity"`  // 容量	MaxCapacity *float32 `json:"maximum-capacity"` //最大容量}type AclForYarnQueue struct {	User  *string `json:"user"` //用户名	Group *string `json:"group"`//组名}```
                     * @return Queue 队列信息。是一个对象转成的json字符串，对应的golang结构体如下所示，例如`QueueWithConfigSetForFairScheduler`的第一个字段`Name`：```Name                         string                               `json:"name"` //队列名称```- `Name`：字段名- `string`：字段类型- `json:"name"`：表示在序列化和反序列化`json`时，对应的`json key`，下面以`json key`来指代- `//`：后面的注释内容对应页面上看到的名称字段类型以`*`开头的表示取值可能为json规范下的null，不同的语言需要使用能表达null的类型来接收，例如java的包装类型；字段类型以`[]`开头的表示是数组类型；`json key`在调用`ModifyYarnQueueV2 `接口也会使用。- 公平调度器```type QueueWithConfigSetForFairScheduler struct {	Name                         string                               `json:"name"` //队列名称	MyId                         string                  `json:"myId"` // 队列id，用于编辑、删除、克隆时使用	ParentId                     string                  `json:"parentId"`  // 父队列Id	Type                         *string                              `json:"type"` // 队列归属。parent或空，当确定某个队列是父队列，且没有子队列时，才可以设置，通常用来支持放置策略nestedUserQueue	AclSubmitApps                *AclForYarnQueue                     `json:"aclSubmitApps"` // 提交访问控制	AclAdministerApps            *AclForYarnQueue                     `json:"aclAdministerApps"` // 管理访问控制	MinSharePreemptionTimeout    *int                                 `json:"minSharePreemptionTimeout"` // 最小共享优先权超时时间	FairSharePreemptionTimeout   *int                                 `json:"fairSharePreemptionTimeout"` // 公平份额抢占超时时间	FairSharePreemptionThreshold *float32                             `json:"fairSharePreemptionThreshold"` // 公平份额抢占阈值。取值 （0，1]	AllowPreemptionFrom          *bool                                `json:"allowPreemptionFrom"`                                        // 抢占模式	SchedulingPolicy             *string                              `json:"schedulingPolicy"`  // 调度策略，取值有drf、fair、fifo	IsDefault                    *bool                                `json:"isDefault"` // 是否是root.default队列	IsRoot                       *bool                                `json:"isRoot"` // 是否是root队列	ConfigSets                   []ConfigSetForFairScheduler          `json:"configSets"` // 配置集设置	Children                     []QueueWithConfigSetForFairScheduler `json:"queues"` // 子队列信息。递归}type AclForYarnQueue struct {	User  *string `json:"user"` //用户名	Group *string `json:"group"`//组名}type ConfigSetForFairScheduler struct {	Name              string        `json:"name"` // 配置集名称	MinResources      *YarnResource `json:"minResources"` // 最小资源量	MaxResources      *YarnResource `json:"maxResources"` // 最大资源量	MaxChildResources *YarnResource `json:"maxChildResources"` // 能够分配给为未声明子队列的最大资源量	MaxRunningApps    *int          `json:"maxRunningApps"` // 最高可同时处于运行的App数量	Weight            *float32      `json:"weight"`                   // 权重	MaxAMShare        *float32      `json:"maxAMShare"` // App Master最大份额}type YarnResource struct {	Vcores *int `json:"vcores"`	Memory *int `json:"memory"`	Type *string `json:"type"` // 当值为`percent`时，表示使用的百分比，否则就是使用的绝对数值}```- 容量调度器```type QueueForCapacitySchedulerV3 struct {	Name                       string                `json:"name"` // 队列名称	MyId                       string                `json:"myId"` // 队列id，用于编辑、删除、克隆时使用	ParentId                   string                `json:"parentId"` // 父队列Id	Configs                    []ConfigForCapacityV3 `json:"configs"` //配置集设置	State                      *string         `json:"state"` // 资源池状态	DefaultNodeLabelExpression *string               `json:"default-node-label-expression"` // 默认标签表达式	AclSubmitApps              *AclForYarnQueue      `json:"acl_submit_applications"` // 提交访问控制	AclAdminQueue              *AclForYarnQueue      `json:"acl_administer_queue"` //管理访问控制	MaxAllocationMB *int32 `json:"maximum-allocation-mb"` // 分配Container最大内存数量	MaxAllocationVcores *int32                         `json:"maximum-allocation-vcores"` // Container最大vCore数量	IsDefault           *bool                          `json:"isDefault"`// 是否是root.default队列	IsRoot              *bool                          `json:"isRoot"` // 是否是root队列	Queues              []*QueueForCapacitySchedulerV3 `json:"queues"`//子队列信息。递归}type ConfigForCapacityV3 struct {	Name                string          `json:"configName"` // 配置集名称	Labels              []CapacityLabel `json:"labels"` // 标签信息	MinUserLimitPercent *int32          `json:"minimum-user-limit-percent"` // 用户最小容量	UserLimitFactor     *float32        `json:"user-limit-factor" valid:"rangeExcludeLeft(0|)"`  // 用户资源因子	MaxApps *int32 `json:"maximum-applications" valid:"rangeExcludeLeft(0|)"` // 最大应用数Max-Applications	MaxAmPercent               *float32 `json:"maximum-am-resource-percent"` // 最大AM比例	DefaultApplicationPriority *int32   `json:"default-application-priority"` // 资源池优先级}type CapacityLabel struct {	Name        string   `json:"labelName"`	Capacity    *float32 `json:"capacity"`  // 容量	MaxCapacity *float32 `json:"maximum-capacity"` //最大容量}type AclForYarnQueue struct {	User  *string `json:"user"` //用户名	Group *string `json:"group"`//组名}```
                     * 
                     */
                    std::string GetQueue() const;

                    /**
                     * 判断参数 Queue 是否已赋值
                     * @return Queue 是否已赋值
                     * 
                     */
                    bool QueueHasBeenSet() const;

                    /**
                     * 获取版本
                     * @return Version 版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                private:

                    /**
                     * 队列信息。是一个对象转成的json字符串，对应的golang结构体如下所示，例如`QueueWithConfigSetForFairScheduler`的第一个字段`Name`：```Name                         string                               `json:"name"` //队列名称```- `Name`：字段名- `string`：字段类型- `json:"name"`：表示在序列化和反序列化`json`时，对应的`json key`，下面以`json key`来指代- `//`：后面的注释内容对应页面上看到的名称字段类型以`*`开头的表示取值可能为json规范下的null，不同的语言需要使用能表达null的类型来接收，例如java的包装类型；字段类型以`[]`开头的表示是数组类型；`json key`在调用`ModifyYarnQueueV2 `接口也会使用。- 公平调度器```type QueueWithConfigSetForFairScheduler struct {	Name                         string                               `json:"name"` //队列名称	MyId                         string                  `json:"myId"` // 队列id，用于编辑、删除、克隆时使用	ParentId                     string                  `json:"parentId"`  // 父队列Id	Type                         *string                              `json:"type"` // 队列归属。parent或空，当确定某个队列是父队列，且没有子队列时，才可以设置，通常用来支持放置策略nestedUserQueue	AclSubmitApps                *AclForYarnQueue                     `json:"aclSubmitApps"` // 提交访问控制	AclAdministerApps            *AclForYarnQueue                     `json:"aclAdministerApps"` // 管理访问控制	MinSharePreemptionTimeout    *int                                 `json:"minSharePreemptionTimeout"` // 最小共享优先权超时时间	FairSharePreemptionTimeout   *int                                 `json:"fairSharePreemptionTimeout"` // 公平份额抢占超时时间	FairSharePreemptionThreshold *float32                             `json:"fairSharePreemptionThreshold"` // 公平份额抢占阈值。取值 （0，1]	AllowPreemptionFrom          *bool                                `json:"allowPreemptionFrom"`                                        // 抢占模式	SchedulingPolicy             *string                              `json:"schedulingPolicy"`  // 调度策略，取值有drf、fair、fifo	IsDefault                    *bool                                `json:"isDefault"` // 是否是root.default队列	IsRoot                       *bool                                `json:"isRoot"` // 是否是root队列	ConfigSets                   []ConfigSetForFairScheduler          `json:"configSets"` // 配置集设置	Children                     []QueueWithConfigSetForFairScheduler `json:"queues"` // 子队列信息。递归}type AclForYarnQueue struct {	User  *string `json:"user"` //用户名	Group *string `json:"group"`//组名}type ConfigSetForFairScheduler struct {	Name              string        `json:"name"` // 配置集名称	MinResources      *YarnResource `json:"minResources"` // 最小资源量	MaxResources      *YarnResource `json:"maxResources"` // 最大资源量	MaxChildResources *YarnResource `json:"maxChildResources"` // 能够分配给为未声明子队列的最大资源量	MaxRunningApps    *int          `json:"maxRunningApps"` // 最高可同时处于运行的App数量	Weight            *float32      `json:"weight"`                   // 权重	MaxAMShare        *float32      `json:"maxAMShare"` // App Master最大份额}type YarnResource struct {	Vcores *int `json:"vcores"`	Memory *int `json:"memory"`	Type *string `json:"type"` // 当值为`percent`时，表示使用的百分比，否则就是使用的绝对数值}```- 容量调度器```type QueueForCapacitySchedulerV3 struct {	Name                       string                `json:"name"` // 队列名称	MyId                       string                `json:"myId"` // 队列id，用于编辑、删除、克隆时使用	ParentId                   string                `json:"parentId"` // 父队列Id	Configs                    []ConfigForCapacityV3 `json:"configs"` //配置集设置	State                      *string         `json:"state"` // 资源池状态	DefaultNodeLabelExpression *string               `json:"default-node-label-expression"` // 默认标签表达式	AclSubmitApps              *AclForYarnQueue      `json:"acl_submit_applications"` // 提交访问控制	AclAdminQueue              *AclForYarnQueue      `json:"acl_administer_queue"` //管理访问控制	MaxAllocationMB *int32 `json:"maximum-allocation-mb"` // 分配Container最大内存数量	MaxAllocationVcores *int32                         `json:"maximum-allocation-vcores"` // Container最大vCore数量	IsDefault           *bool                          `json:"isDefault"`// 是否是root.default队列	IsRoot              *bool                          `json:"isRoot"` // 是否是root队列	Queues              []*QueueForCapacitySchedulerV3 `json:"queues"`//子队列信息。递归}type ConfigForCapacityV3 struct {	Name                string          `json:"configName"` // 配置集名称	Labels              []CapacityLabel `json:"labels"` // 标签信息	MinUserLimitPercent *int32          `json:"minimum-user-limit-percent"` // 用户最小容量	UserLimitFactor     *float32        `json:"user-limit-factor" valid:"rangeExcludeLeft(0|)"`  // 用户资源因子	MaxApps *int32 `json:"maximum-applications" valid:"rangeExcludeLeft(0|)"` // 最大应用数Max-Applications	MaxAmPercent               *float32 `json:"maximum-am-resource-percent"` // 最大AM比例	DefaultApplicationPriority *int32   `json:"default-application-priority"` // 资源池优先级}type CapacityLabel struct {	Name        string   `json:"labelName"`	Capacity    *float32 `json:"capacity"`  // 容量	MaxCapacity *float32 `json:"maximum-capacity"` //最大容量}type AclForYarnQueue struct {	User  *string `json:"user"` //用户名	Group *string `json:"group"`//组名}```
                     */
                    std::string m_queue;
                    bool m_queueHasBeenSet;

                    /**
                     * 版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEYARNQUEUERESPONSE_H_
