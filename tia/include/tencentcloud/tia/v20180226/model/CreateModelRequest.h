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

#ifndef TENCENTCLOUD_TIA_V20180226_MODEL_CREATEMODELREQUEST_H_
#define TENCENTCLOUD_TIA_V20180226_MODEL_CREATEMODELREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateModel请求参数结构体
                */
                class CreateModelRequest : public AbstractModel
                {
                public:
                    CreateModelRequest();
                    ~CreateModelRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取要部署的模型文件路径名
                     * @return Model 要部署的模型文件路径名
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置要部署的模型文件路径名
                     * @param _model 要部署的模型文件路径名
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
                     * 获取关于模型的描述
                     * @return Description 关于模型的描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置关于模型的描述
                     * @param _description 关于模型的描述
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
                     * 获取部署目标集群的名称，`集群模式` 必填
                     * @return Cluster 部署目标集群的名称，`集群模式` 必填
                     * 
                     */
                    std::string GetCluster() const;

                    /**
                     * 设置部署目标集群的名称，`集群模式` 必填
                     * @param _cluster 部署目标集群的名称，`集群模式` 必填
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
                     * 获取运行环境镜像的标签，详见 [Serving 环境](https://cloud.tencent.com/document/product/851/17320#serving-.E7.8E.AF.E5.A2.83)
                     * @return RuntimeVersion 运行环境镜像的标签，详见 [Serving 环境](https://cloud.tencent.com/document/product/851/17320#serving-.E7.8E.AF.E5.A2.83)
                     * 
                     */
                    std::string GetRuntimeVersion() const;

                    /**
                     * 设置运行环境镜像的标签，详见 [Serving 环境](https://cloud.tencent.com/document/product/851/17320#serving-.E7.8E.AF.E5.A2.83)
                     * @param _runtimeVersion 运行环境镜像的标签，详见 [Serving 环境](https://cloud.tencent.com/document/product/851/17320#serving-.E7.8E.AF.E5.A2.83)
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
                     * 获取要部署的模型副本数目，`集群模式` 选填
                     * @return Replicas 要部署的模型副本数目，`集群模式` 选填
                     * 
                     */
                    uint64_t GetReplicas() const;

                    /**
                     * 设置要部署的模型副本数目，`集群模式` 选填
                     * @param _replicas 要部署的模型副本数目，`集群模式` 选填
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
                     * 获取暴露外网或内网，默认暴露外网，`集群模式` 选填
                     * @return Expose 暴露外网或内网，默认暴露外网，`集群模式` 选填
                     * 
                     */
                    std::string GetExpose() const;

                    /**
                     * 设置暴露外网或内网，默认暴露外网，`集群模式` 选填
                     * @param _expose 暴露外网或内网，默认暴露外网，`集群模式` 选填
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
                     * 获取部署模式，取值 `serverless` 即为 `无服务器模式`，否则为 `集群模式` 下服务的运行规模，形如 `2U4G1P`，详见 [自定义的训练规模](https://cloud.tencent.com/document/product/851/17319#.E8.87.AA.E5.AE.9A.E4.B9.89.E7.9A.84.E8.AE.AD.E7.BB.83.E8.A7.84.E6.A8.A1)
                     * @return ServType 部署模式，取值 `serverless` 即为 `无服务器模式`，否则为 `集群模式` 下服务的运行规模，形如 `2U4G1P`，详见 [自定义的训练规模](https://cloud.tencent.com/document/product/851/17319#.E8.87.AA.E5.AE.9A.E4.B9.89.E7.9A.84.E8.AE.AD.E7.BB.83.E8.A7.84.E6.A8.A1)
                     * 
                     */
                    std::string GetServType() const;

                    /**
                     * 设置部署模式，取值 `serverless` 即为 `无服务器模式`，否则为 `集群模式` 下服务的运行规模，形如 `2U4G1P`，详见 [自定义的训练规模](https://cloud.tencent.com/document/product/851/17319#.E8.87.AA.E5.AE.9A.E4.B9.89.E7.9A.84.E8.AE.AD.E7.BB.83.E8.A7.84.E6.A8.A1)
                     * @param _servType 部署模式，取值 `serverless` 即为 `无服务器模式`，否则为 `集群模式` 下服务的运行规模，形如 `2U4G1P`，详见 [自定义的训练规模](https://cloud.tencent.com/document/product/851/17319#.E8.87.AA.E5.AE.9A.E4.B9.89.E7.9A.84.E8.AE.AD.E7.BB.83.E8.A7.84.E6.A8.A1)
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
                     * 获取`无服务器模式` 可选的其他配置信息，详见 [利用无服务器函数部署](https://cloud.tencent.com/document/product/851/17049#.E5.88.A9.E7.94.A8.E6.97.A0.E6.9C.8D.E5.8A.A1.E5.99.A8.E5.87.BD.E6.95.B0.E9.83.A8.E7.BD.B2)
                     * @return RuntimeConf `无服务器模式` 可选的其他配置信息，详见 [利用无服务器函数部署](https://cloud.tencent.com/document/product/851/17049#.E5.88.A9.E7.94.A8.E6.97.A0.E6.9C.8D.E5.8A.A1.E5.99.A8.E5.87.BD.E6.95.B0.E9.83.A8.E7.BD.B2)
                     * 
                     */
                    std::vector<std::string> GetRuntimeConf() const;

                    /**
                     * 设置`无服务器模式` 可选的其他配置信息，详见 [利用无服务器函数部署](https://cloud.tencent.com/document/product/851/17049#.E5.88.A9.E7.94.A8.E6.97.A0.E6.9C.8D.E5.8A.A1.E5.99.A8.E5.87.BD.E6.95.B0.E9.83.A8.E7.BD.B2)
                     * @param _runtimeConf `无服务器模式` 可选的其他配置信息，详见 [利用无服务器函数部署](https://cloud.tencent.com/document/product/851/17049#.E5.88.A9.E7.94.A8.E6.97.A0.E6.9C.8D.E5.8A.A1.E5.99.A8.E5.87.BD.E6.95.B0.E9.83.A8.E7.BD.B2)
                     * 
                     */
                    void SetRuntimeConf(const std::vector<std::string>& _runtimeConf);

                    /**
                     * 判断参数 RuntimeConf 是否已赋值
                     * @return RuntimeConf 是否已赋值
                     * 
                     */
                    bool RuntimeConfHasBeenSet() const;

                private:

                    /**
                     * 模型名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 要部署的模型文件路径名
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 关于模型的描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 部署目标集群的名称，`集群模式` 必填
                     */
                    std::string m_cluster;
                    bool m_clusterHasBeenSet;

                    /**
                     * 运行环境镜像的标签，详见 [Serving 环境](https://cloud.tencent.com/document/product/851/17320#serving-.E7.8E.AF.E5.A2.83)
                     */
                    std::string m_runtimeVersion;
                    bool m_runtimeVersionHasBeenSet;

                    /**
                     * 要部署的模型副本数目，`集群模式` 选填
                     */
                    uint64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * 暴露外网或内网，默认暴露外网，`集群模式` 选填
                     */
                    std::string m_expose;
                    bool m_exposeHasBeenSet;

                    /**
                     * 部署模式，取值 `serverless` 即为 `无服务器模式`，否则为 `集群模式` 下服务的运行规模，形如 `2U4G1P`，详见 [自定义的训练规模](https://cloud.tencent.com/document/product/851/17319#.E8.87.AA.E5.AE.9A.E4.B9.89.E7.9A.84.E8.AE.AD.E7.BB.83.E8.A7.84.E6.A8.A1)
                     */
                    std::string m_servType;
                    bool m_servTypeHasBeenSet;

                    /**
                     * `无服务器模式` 可选的其他配置信息，详见 [利用无服务器函数部署](https://cloud.tencent.com/document/product/851/17049#.E5.88.A9.E7.94.A8.E6.97.A0.E6.9C.8D.E5.8A.A1.E5.99.A8.E5.87.BD.E6.95.B0.E9.83.A8.E7.BD.B2)
                     */
                    std::vector<std::string> m_runtimeConf;
                    bool m_runtimeConfHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIA_V20180226_MODEL_CREATEMODELREQUEST_H_
