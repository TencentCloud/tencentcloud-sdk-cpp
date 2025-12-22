/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_DEPLOYRECORD_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_DEPLOYRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * 云托管实例的部署记录, 包括扩缩容状态和流量分配情况
                */
                class DeployRecord : public AbstractModel
                {
                public:
                    DeployRecord();
                    ~DeployRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取部署Id
                     * @return DeployId 部署Id
                     * 
                     */
                    std::string GetDeployId() const;

                    /**
                     * 设置部署Id
                     * @param _deployId 部署Id
                     * 
                     */
                    void SetDeployId(const std::string& _deployId);

                    /**
                     * 判断参数 DeployId 是否已赋值
                     * @return DeployId 是否已赋值
                     * 
                     */
                    bool DeployIdHasBeenSet() const;

                    /**
                     * 获取部署开始时间
                     * @return DeployTime 部署开始时间
                     * 
                     */
                    std::string GetDeployTime() const;

                    /**
                     * 设置部署开始时间
                     * @param _deployTime 部署开始时间
                     * 
                     */
                    void SetDeployTime(const std::string& _deployTime);

                    /**
                     * 判断参数 DeployTime 是否已赋值
                     * @return DeployTime 是否已赋值
                     * 
                     */
                    bool DeployTimeHasBeenSet() const;

                    /**
                     * 获取状态：running/deploying/deploy_failed
                     * @return Status 状态：running/deploying/deploy_failed
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态：running/deploying/deploy_failed
                     * @param _status 状态：running/deploying/deploy_failed
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取部署运行Id 用户查询部署日志
                     * @return RunId 部署运行Id 用户查询部署日志
                     * 
                     */
                    std::string GetRunId() const;

                    /**
                     * 设置部署运行Id 用户查询部署日志
                     * @param _runId 部署运行Id 用户查询部署日志
                     * 
                     */
                    void SetRunId(const std::string& _runId);

                    /**
                     * 判断参数 RunId 是否已赋值
                     * @return RunId 是否已赋值
                     * 
                     */
                    bool RunIdHasBeenSet() const;

                    /**
                     * 获取构建Id
                     * @return BuildId 构建Id
                     * 
                     */
                    int64_t GetBuildId() const;

                    /**
                     * 设置构建Id
                     * @param _buildId 构建Id
                     * 
                     */
                    void SetBuildId(const int64_t& _buildId);

                    /**
                     * 判断参数 BuildId 是否已赋值
                     * @return BuildId 是否已赋值
                     * 
                     */
                    bool BuildIdHasBeenSet() const;

                    /**
                     * 获取流量比例
                     * @return FlowRatio 流量比例
                     * 
                     */
                    int64_t GetFlowRatio() const;

                    /**
                     * 设置流量比例
                     * @param _flowRatio 流量比例
                     * 
                     */
                    void SetFlowRatio(const int64_t& _flowRatio);

                    /**
                     * 判断参数 FlowRatio 是否已赋值
                     * @return FlowRatio 是否已赋值
                     * 
                     */
                    bool FlowRatioHasBeenSet() const;

                    /**
                     * 获取镜像url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageUrl 镜像url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置镜像url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageUrl 镜像url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取缩容状态 缩容为 zero 否则为空
                     * @return ScaleStatus 缩容状态 缩容为 zero 否则为空
                     * 
                     */
                    std::string GetScaleStatus() const;

                    /**
                     * 设置缩容状态 缩容为 zero 否则为空
                     * @param _scaleStatus 缩容状态 缩容为 zero 否则为空
                     * 
                     */
                    void SetScaleStatus(const std::string& _scaleStatus);

                    /**
                     * 判断参数 ScaleStatus 是否已赋值
                     * @return ScaleStatus 是否已赋值
                     * 
                     */
                    bool ScaleStatusHasBeenSet() const;

                    /**
                     * 获取是否分配流量
                     * @return HasTraffic 是否分配流量
                     * 
                     */
                    bool GetHasTraffic() const;

                    /**
                     * 设置是否分配流量
                     * @param _hasTraffic 是否分配流量
                     * 
                     */
                    void SetHasTraffic(const bool& _hasTraffic);

                    /**
                     * 判断参数 HasTraffic 是否已赋值
                     * @return HasTraffic 是否已赋值
                     * 
                     */
                    bool HasTrafficHasBeenSet() const;

                    /**
                     * 获取流量分配方式, FLOW: 百分比分配; URL_PARAMS: 匹配 query 参数; HEADERS: 匹配请求 Header
                     * @return TrafficType 流量分配方式, FLOW: 百分比分配; URL_PARAMS: 匹配 query 参数; HEADERS: 匹配请求 Header
                     * 
                     */
                    std::string GetTrafficType() const;

                    /**
                     * 设置流量分配方式, FLOW: 百分比分配; URL_PARAMS: 匹配 query 参数; HEADERS: 匹配请求 Header
                     * @param _trafficType 流量分配方式, FLOW: 百分比分配; URL_PARAMS: 匹配 query 参数; HEADERS: 匹配请求 Header
                     * 
                     */
                    void SetTrafficType(const std::string& _trafficType);

                    /**
                     * 判断参数 TrafficType 是否已赋值
                     * @return TrafficType 是否已赋值
                     * 
                     */
                    bool TrafficTypeHasBeenSet() const;

                    /**
                     * 获取当前版本是否在发布中
                     * @return IsReleasing 当前版本是否在发布中
                     * 
                     */
                    bool GetIsReleasing() const;

                    /**
                     * 设置当前版本是否在发布中
                     * @param _isReleasing 当前版本是否在发布中
                     * 
                     */
                    void SetIsReleasing(const bool& _isReleasing);

                    /**
                     * 判断参数 IsReleasing 是否已赋值
                     * @return IsReleasing 是否已赋值
                     * 
                     */
                    bool IsReleasingHasBeenSet() const;

                private:

                    /**
                     * 部署Id
                     */
                    std::string m_deployId;
                    bool m_deployIdHasBeenSet;

                    /**
                     * 部署开始时间
                     */
                    std::string m_deployTime;
                    bool m_deployTimeHasBeenSet;

                    /**
                     * 状态：running/deploying/deploy_failed
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 部署运行Id 用户查询部署日志
                     */
                    std::string m_runId;
                    bool m_runIdHasBeenSet;

                    /**
                     * 构建Id
                     */
                    int64_t m_buildId;
                    bool m_buildIdHasBeenSet;

                    /**
                     * 流量比例
                     */
                    int64_t m_flowRatio;
                    bool m_flowRatioHasBeenSet;

                    /**
                     * 镜像url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 缩容状态 缩容为 zero 否则为空
                     */
                    std::string m_scaleStatus;
                    bool m_scaleStatusHasBeenSet;

                    /**
                     * 是否分配流量
                     */
                    bool m_hasTraffic;
                    bool m_hasTrafficHasBeenSet;

                    /**
                     * 流量分配方式, FLOW: 百分比分配; URL_PARAMS: 匹配 query 参数; HEADERS: 匹配请求 Header
                     */
                    std::string m_trafficType;
                    bool m_trafficTypeHasBeenSet;

                    /**
                     * 当前版本是否在发布中
                     */
                    bool m_isReleasing;
                    bool m_isReleasingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_DEPLOYRECORD_H_
