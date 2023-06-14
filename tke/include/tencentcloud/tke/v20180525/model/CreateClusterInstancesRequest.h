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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERINSTANCESREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/InstanceAdvancedSettings.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CreateClusterInstances请求参数结构体
                */
                class CreateClusterInstancesRequest : public AbstractModel
                {
                public:
                    CreateClusterInstancesRequest();
                    ~CreateClusterInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群 ID，请填写 查询集群列表 接口中返回的 clusterId 字段
                     * @return ClusterId 集群 ID，请填写 查询集群列表 接口中返回的 clusterId 字段
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群 ID，请填写 查询集群列表 接口中返回的 clusterId 字段
                     * @param _clusterId 集群 ID，请填写 查询集群列表 接口中返回的 clusterId 字段
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取CVM创建透传参数，json化字符串格式，如需要保证扩展集群节点请求幂等性需要在此参数添加ClientToken字段，详见[CVM创建实例](https://cloud.tencent.com/document/product/213/15730)接口。
                     * @return RunInstancePara CVM创建透传参数，json化字符串格式，如需要保证扩展集群节点请求幂等性需要在此参数添加ClientToken字段，详见[CVM创建实例](https://cloud.tencent.com/document/product/213/15730)接口。
                     * 
                     */
                    std::string GetRunInstancePara() const;

                    /**
                     * 设置CVM创建透传参数，json化字符串格式，如需要保证扩展集群节点请求幂等性需要在此参数添加ClientToken字段，详见[CVM创建实例](https://cloud.tencent.com/document/product/213/15730)接口。
                     * @param _runInstancePara CVM创建透传参数，json化字符串格式，如需要保证扩展集群节点请求幂等性需要在此参数添加ClientToken字段，详见[CVM创建实例](https://cloud.tencent.com/document/product/213/15730)接口。
                     * 
                     */
                    void SetRunInstancePara(const std::string& _runInstancePara);

                    /**
                     * 判断参数 RunInstancePara 是否已赋值
                     * @return RunInstancePara 是否已赋值
                     * 
                     */
                    bool RunInstanceParaHasBeenSet() const;

                    /**
                     * 获取实例额外需要设置参数信息
                     * @return InstanceAdvancedSettings 实例额外需要设置参数信息
                     * 
                     */
                    InstanceAdvancedSettings GetInstanceAdvancedSettings() const;

                    /**
                     * 设置实例额外需要设置参数信息
                     * @param _instanceAdvancedSettings 实例额外需要设置参数信息
                     * 
                     */
                    void SetInstanceAdvancedSettings(const InstanceAdvancedSettings& _instanceAdvancedSettings);

                    /**
                     * 判断参数 InstanceAdvancedSettings 是否已赋值
                     * @return InstanceAdvancedSettings 是否已赋值
                     * 
                     */
                    bool InstanceAdvancedSettingsHasBeenSet() const;

                    /**
                     * 获取校验规则相关选项，可配置跳过某些校验规则。目前支持GlobalRouteCIDRCheck（跳过GlobalRouter的相关校验），VpcCniCIDRCheck（跳过VpcCni相关校验）
                     * @return SkipValidateOptions 校验规则相关选项，可配置跳过某些校验规则。目前支持GlobalRouteCIDRCheck（跳过GlobalRouter的相关校验），VpcCniCIDRCheck（跳过VpcCni相关校验）
                     * 
                     */
                    std::vector<std::string> GetSkipValidateOptions() const;

                    /**
                     * 设置校验规则相关选项，可配置跳过某些校验规则。目前支持GlobalRouteCIDRCheck（跳过GlobalRouter的相关校验），VpcCniCIDRCheck（跳过VpcCni相关校验）
                     * @param _skipValidateOptions 校验规则相关选项，可配置跳过某些校验规则。目前支持GlobalRouteCIDRCheck（跳过GlobalRouter的相关校验），VpcCniCIDRCheck（跳过VpcCni相关校验）
                     * 
                     */
                    void SetSkipValidateOptions(const std::vector<std::string>& _skipValidateOptions);

                    /**
                     * 判断参数 SkipValidateOptions 是否已赋值
                     * @return SkipValidateOptions 是否已赋值
                     * 
                     */
                    bool SkipValidateOptionsHasBeenSet() const;

                private:

                    /**
                     * 集群 ID，请填写 查询集群列表 接口中返回的 clusterId 字段
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * CVM创建透传参数，json化字符串格式，如需要保证扩展集群节点请求幂等性需要在此参数添加ClientToken字段，详见[CVM创建实例](https://cloud.tencent.com/document/product/213/15730)接口。
                     */
                    std::string m_runInstancePara;
                    bool m_runInstanceParaHasBeenSet;

                    /**
                     * 实例额外需要设置参数信息
                     */
                    InstanceAdvancedSettings m_instanceAdvancedSettings;
                    bool m_instanceAdvancedSettingsHasBeenSet;

                    /**
                     * 校验规则相关选项，可配置跳过某些校验规则。目前支持GlobalRouteCIDRCheck（跳过GlobalRouter的相关校验），VpcCniCIDRCheck（跳过VpcCni相关校验）
                     */
                    std::vector<std::string> m_skipValidateOptions;
                    bool m_skipValidateOptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERINSTANCESREQUEST_H_
