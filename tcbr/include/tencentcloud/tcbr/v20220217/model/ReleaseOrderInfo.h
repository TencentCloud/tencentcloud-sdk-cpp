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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_RELEASEORDERINFO_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_RELEASEORDERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcbr/v20220217/model/VersionInfo.h>
#include <tencentcloud/tcbr/v20220217/model/ObjectKV.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * 发布单信息
                */
                class ReleaseOrderInfo : public AbstractModel
                {
                public:
                    ReleaseOrderInfo();
                    ~ReleaseOrderInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发布单Id
                     * @return Id 发布单Id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置发布单Id
                     * @param _id 发布单Id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取服务名
                     * @return ServerName 服务名
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置服务名
                     * @param _serverName 服务名
                     * 
                     */
                    void SetServerName(const std::string& _serverName);

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     * 
                     */
                    bool ServerNameHasBeenSet() const;

                    /**
                     * 获取当前版本
                     * @return CurrentVersion 当前版本
                     * 
                     */
                    VersionInfo GetCurrentVersion() const;

                    /**
                     * 设置当前版本
                     * @param _currentVersion 当前版本
                     * 
                     */
                    void SetCurrentVersion(const VersionInfo& _currentVersion);

                    /**
                     * 判断参数 CurrentVersion 是否已赋值
                     * @return CurrentVersion 是否已赋值
                     * 
                     */
                    bool CurrentVersionHasBeenSet() const;

                    /**
                     * 获取发布版本
                     * @return ReleaseVersion 发布版本
                     * 
                     */
                    VersionInfo GetReleaseVersion() const;

                    /**
                     * 设置发布版本
                     * @param _releaseVersion 发布版本
                     * 
                     */
                    void SetReleaseVersion(const VersionInfo& _releaseVersion);

                    /**
                     * 判断参数 ReleaseVersion 是否已赋值
                     * @return ReleaseVersion 是否已赋值
                     * 
                     */
                    bool ReleaseVersionHasBeenSet() const;

                    /**
                     * 获取灰度状态
                     * @return GrayStatus 灰度状态
                     * 
                     */
                    std::string GetGrayStatus() const;

                    /**
                     * 设置灰度状态
                     * @param _grayStatus 灰度状态
                     * 
                     */
                    void SetGrayStatus(const std::string& _grayStatus);

                    /**
                     * 判断参数 GrayStatus 是否已赋值
                     * @return GrayStatus 是否已赋值
                     * 
                     */
                    bool GrayStatusHasBeenSet() const;

                    /**
                     * 获取发布状态
                     * @return ReleaseStatus 发布状态
                     * 
                     */
                    std::string GetReleaseStatus() const;

                    /**
                     * 设置发布状态
                     * @param _releaseStatus 发布状态
                     * 
                     */
                    void SetReleaseStatus(const std::string& _releaseStatus);

                    /**
                     * 判断参数 ReleaseStatus 是否已赋值
                     * @return ReleaseStatus 是否已赋值
                     * 
                     */
                    bool ReleaseStatusHasBeenSet() const;

                    /**
                     * 获取流量值
                     * @return TrafficTypeValues 流量值
                     * 
                     */
                    std::vector<ObjectKV> GetTrafficTypeValues() const;

                    /**
                     * 设置流量值
                     * @param _trafficTypeValues 流量值
                     * 
                     */
                    void SetTrafficTypeValues(const std::vector<ObjectKV>& _trafficTypeValues);

                    /**
                     * 判断参数 TrafficTypeValues 是否已赋值
                     * @return TrafficTypeValues 是否已赋值
                     * 
                     */
                    bool TrafficTypeValuesHasBeenSet() const;

                    /**
                     * 获取流量类型
                     * @return TrafficType 流量类型
                     * 
                     */
                    std::string GetTrafficType() const;

                    /**
                     * 设置流量类型
                     * @param _trafficType 流量类型
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
                     * 获取百分比
                     * @return FlowRatio 百分比
                     * 
                     */
                    int64_t GetFlowRatio() const;

                    /**
                     * 设置百分比
                     * @param _flowRatio 百分比
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取是否发布中
                     * @return IsReleasing 是否发布中
                     * 
                     */
                    bool GetIsReleasing() const;

                    /**
                     * 设置是否发布中
                     * @param _isReleasing 是否发布中
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
                     * 发布单Id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 服务名
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * 当前版本
                     */
                    VersionInfo m_currentVersion;
                    bool m_currentVersionHasBeenSet;

                    /**
                     * 发布版本
                     */
                    VersionInfo m_releaseVersion;
                    bool m_releaseVersionHasBeenSet;

                    /**
                     * 灰度状态
                     */
                    std::string m_grayStatus;
                    bool m_grayStatusHasBeenSet;

                    /**
                     * 发布状态
                     */
                    std::string m_releaseStatus;
                    bool m_releaseStatusHasBeenSet;

                    /**
                     * 流量值
                     */
                    std::vector<ObjectKV> m_trafficTypeValues;
                    bool m_trafficTypeValuesHasBeenSet;

                    /**
                     * 流量类型
                     */
                    std::string m_trafficType;
                    bool m_trafficTypeHasBeenSet;

                    /**
                     * 百分比
                     */
                    int64_t m_flowRatio;
                    bool m_flowRatioHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 是否发布中
                     */
                    bool m_isReleasing;
                    bool m_isReleasingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_RELEASEORDERINFO_H_
