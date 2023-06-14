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

#ifndef TENCENTCLOUD_TIA_V20180226_MODEL_MODEL_H_
#define TENCENTCLOUD_TIA_V20180226_MODEL_MODEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tia
    {
        namespace V20180226
        {
            namespace Model
            {
                /**
                * 用于描述模型的详细情况
        "Model": {
            "Name": "test-model",
            "Description": "test-model",
            "Cluster": "ap-beijing",
            "Model": "cos://test-1255502019.cos.ap-shanghai.myqcloud.com/example:/data/mnist",
            "RuntimeVersion": "tiaserv-1.6.0-cpu",
            "CreateTime": "2018-04-26 15:59:25 +0800 CST",
            "State": "Running",
            "ServingUrl": "140.143.51.230",
            "Message": "Deployment does not have minimum availability.",
            "AppId": 1255502019,
            "ServType": "1U2G0P"
        },
                */
                class Model : public AbstractModel
                {
                public:
                    Model();
                    ~Model() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型名称
                     * @return Name 模型名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置模型名称
                     * @param _name 模型名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取模型描述
                     * @return Description 模型描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置模型描述
                     * @param _description 模型描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取集群名称
                     * @return Cluster 集群名称
                     * 
                     */
                    std::string GetCluster() const;

                    /**
                     * 设置集群名称
                     * @param _cluster 集群名称
                     * 
                     */
                    void SetCluster(const std::string& _cluster);

                    /**
                     * 判断参数 Cluster 是否已赋值
                     * @return Cluster 是否已赋值
                     * 
                     */
                    bool ClusterHasBeenSet() const;

                    /**
                     * 获取模型地址
                     * @return Model 模型地址
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置模型地址
                     * @param _model 模型地址
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取运行环境编号
                     * @return RuntimeVersion 运行环境编号
                     * 
                     */
                    std::string GetRuntimeVersion() const;

                    /**
                     * 设置运行环境编号
                     * @param _runtimeVersion 运行环境编号
                     * 
                     */
                    void SetRuntimeVersion(const std::string& _runtimeVersion);

                    /**
                     * 判断参数 RuntimeVersion 是否已赋值
                     * @return RuntimeVersion 是否已赋值
                     * 
                     */
                    bool RuntimeVersionHasBeenSet() const;

                    /**
                     * 获取模型创建时间
                     * @return CreateTime 模型创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置模型创建时间
                     * @param _createTime 模型创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取模型运行状态
                     * @return State 模型运行状态
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置模型运行状态
                     * @param _state 模型运行状态
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取提供服务的url
                     * @return ServingUrl 提供服务的url
                     * 
                     */
                    std::string GetServingUrl() const;

                    /**
                     * 设置提供服务的url
                     * @param _servingUrl 提供服务的url
                     * 
                     */
                    void SetServingUrl(const std::string& _servingUrl);

                    /**
                     * 判断参数 ServingUrl 是否已赋值
                     * @return ServingUrl 是否已赋值
                     * 
                     */
                    bool ServingUrlHasBeenSet() const;

                    /**
                     * 获取相关消息
                     * @return Message 相关消息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置相关消息
                     * @param _message 相关消息
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取编号
                     * @return AppId 编号
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置编号
                     * @param _appId 编号
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取机型
                     * @return ServType 机型
                     * 
                     */
                    std::string GetServType() const;

                    /**
                     * 设置机型
                     * @param _servType 机型
                     * 
                     */
                    void SetServType(const std::string& _servType);

                    /**
                     * 判断参数 ServType 是否已赋值
                     * @return ServType 是否已赋值
                     * 
                     */
                    bool ServTypeHasBeenSet() const;

                    /**
                     * 获取模型暴露方式
                     * @return Expose 模型暴露方式
                     * 
                     */
                    std::string GetExpose() const;

                    /**
                     * 设置模型暴露方式
                     * @param _expose 模型暴露方式
                     * 
                     */
                    void SetExpose(const std::string& _expose);

                    /**
                     * 判断参数 Expose 是否已赋值
                     * @return Expose 是否已赋值
                     * 
                     */
                    bool ExposeHasBeenSet() const;

                    /**
                     * 获取部署副本数量
                     * @return Replicas 部署副本数量
                     * 
                     */
                    uint64_t GetReplicas() const;

                    /**
                     * 设置部署副本数量
                     * @param _replicas 部署副本数量
                     * 
                     */
                    void SetReplicas(const uint64_t& _replicas);

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     * 
                     */
                    bool ReplicasHasBeenSet() const;

                    /**
                     * 获取模型Id
                     * @return Id 模型Id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置模型Id
                     * @param _id 模型Id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取创建任务的Uin
                     * @return Uin 创建任务的Uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置创建任务的Uin
                     * @param _uin 创建任务的Uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取模型删除时间，格式为：2006-01-02 15:04:05.999999999 -0700 MST
                     * @return DelTime 模型删除时间，格式为：2006-01-02 15:04:05.999999999 -0700 MST
                     * 
                     */
                    std::string GetDelTime() const;

                    /**
                     * 设置模型删除时间，格式为：2006-01-02 15:04:05.999999999 -0700 MST
                     * @param _delTime 模型删除时间，格式为：2006-01-02 15:04:05.999999999 -0700 MST
                     * 
                     */
                    void SetDelTime(const std::string& _delTime);

                    /**
                     * 判断参数 DelTime 是否已赋值
                     * @return DelTime 是否已赋值
                     * 
                     */
                    bool DelTimeHasBeenSet() const;

                private:

                    /**
                     * 模型名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 模型描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_cluster;
                    bool m_clusterHasBeenSet;

                    /**
                     * 模型地址
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 运行环境编号
                     */
                    std::string m_runtimeVersion;
                    bool m_runtimeVersionHasBeenSet;

                    /**
                     * 模型创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 模型运行状态
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 提供服务的url
                     */
                    std::string m_servingUrl;
                    bool m_servingUrlHasBeenSet;

                    /**
                     * 相关消息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 编号
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 机型
                     */
                    std::string m_servType;
                    bool m_servTypeHasBeenSet;

                    /**
                     * 模型暴露方式
                     */
                    std::string m_expose;
                    bool m_exposeHasBeenSet;

                    /**
                     * 部署副本数量
                     */
                    uint64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * 模型Id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 创建任务的Uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 模型删除时间，格式为：2006-01-02 15:04:05.999999999 -0700 MST
                     */
                    std::string m_delTime;
                    bool m_delTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIA_V20180226_MODEL_MODEL_H_
