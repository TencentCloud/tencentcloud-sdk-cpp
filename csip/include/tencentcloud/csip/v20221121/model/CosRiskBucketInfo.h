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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSRISKBUCKETINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSRISKBUCKETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 受影响的存储桶信息
                */
                class CosRiskBucketInfo : public AbstractModel
                {
                public:
                    CosRiskBucketInfo();
                    ~CosRiskBucketInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取appid
                     * @return AppId appid
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置appid
                     * @param _appId appid
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取桶名
                     * @return BucketName 桶名
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置桶名
                     * @param _bucketName 桶名
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取桶地域
                     * @return BucketRegion 桶地域
                     * 
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置桶地域
                     * @param _bucketRegion 桶地域
                     * 
                     */
                    void SetBucketRegion(const std::string& _bucketRegion);

                    /**
                     * 判断参数 BucketRegion 是否已赋值
                     * @return BucketRegion 是否已赋值
                     * 
                     */
                    bool BucketRegionHasBeenSet() const;

                    /**
                     * 获取桶备注信息
                     * @return BucketMarker 桶备注信息
                     * 
                     */
                    std::string GetBucketMarker() const;

                    /**
                     * 设置桶备注信息
                     * @param _bucketMarker 桶备注信息
                     * 
                     */
                    void SetBucketMarker(const std::string& _bucketMarker);

                    /**
                     * 判断参数 BucketMarker 是否已赋值
                     * @return BucketMarker 是否已赋值
                     * 
                     */
                    bool BucketMarkerHasBeenSet() const;

                    /**
                     * 获取桶uin
                     * @return BucketUin 桶uin
                     * 
                     */
                    std::string GetBucketUin() const;

                    /**
                     * 设置桶uin
                     * @param _bucketUin 桶uin
                     * 
                     */
                    void SetBucketUin(const std::string& _bucketUin);

                    /**
                     * 判断参数 BucketUin 是否已赋值
                     * @return BucketUin 是否已赋值
                     * 
                     */
                    bool BucketUinHasBeenSet() const;

                    /**
                     * 获取uin昵称
                     * @return BucketNickName uin昵称
                     * 
                     */
                    std::string GetBucketNickName() const;

                    /**
                     * 设置uin昵称
                     * @param _bucketNickName uin昵称
                     * 
                     */
                    void SetBucketNickName(const std::string& _bucketNickName);

                    /**
                     * 判断参数 BucketNickName 是否已赋值
                     * @return BucketNickName 是否已赋值
                     * 
                     */
                    bool BucketNickNameHasBeenSet() const;

                    /**
                     * 获取uin主账号昵称
                     * @return BucketMainNickName uin主账号昵称
                     * 
                     */
                    std::string GetBucketMainNickName() const;

                    /**
                     * 设置uin主账号昵称
                     * @param _bucketMainNickName uin主账号昵称
                     * 
                     */
                    void SetBucketMainNickName(const std::string& _bucketMainNickName);

                    /**
                     * 判断参数 BucketMainNickName 是否已赋值
                     * @return BucketMainNickName 是否已赋值
                     * 
                     */
                    bool BucketMainNickNameHasBeenSet() const;

                    /**
                     * 获取uin身份
                     * @return BucketIdentify uin身份
                     * 
                     */
                    int64_t GetBucketIdentify() const;

                    /**
                     * 设置uin身份
                     * @param _bucketIdentify uin身份
                     * 
                     */
                    void SetBucketIdentify(const int64_t& _bucketIdentify);

                    /**
                     * 判断参数 BucketIdentify 是否已赋值
                     * @return BucketIdentify 是否已赋值
                     * 
                     */
                    bool BucketIdentifyHasBeenSet() const;

                    /**
                     * 获取风险检出时间Unix时间单位毫秒
                     * @return LastScanTimestamp 风险检出时间Unix时间单位毫秒
                     * 
                     */
                    int64_t GetLastScanTimestamp() const;

                    /**
                     * 设置风险检出时间Unix时间单位毫秒
                     * @param _lastScanTimestamp 风险检出时间Unix时间单位毫秒
                     * 
                     */
                    void SetLastScanTimestamp(const int64_t& _lastScanTimestamp);

                    /**
                     * 判断参数 LastScanTimestamp 是否已赋值
                     * @return LastScanTimestamp 是否已赋值
                     * 
                     */
                    bool LastScanTimestampHasBeenSet() const;

                    /**
                     * 获取状态信息
                     * @return HandleStatus 状态信息
                     * 
                     */
                    int64_t GetHandleStatus() const;

                    /**
                     * 设置状态信息
                     * @param _handleStatus 状态信息
                     * 
                     */
                    void SetHandleStatus(const int64_t& _handleStatus);

                    /**
                     * 判断参数 HandleStatus 是否已赋值
                     * @return HandleStatus 是否已赋值
                     * 
                     */
                    bool HandleStatusHasBeenSet() const;

                    /**
                     * 获取风险名称
                     * @return PolicyName 风险名称
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置风险名称
                     * @param _policyName 风险名称
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取风险类型
                     * @return PolicyType 风险类型
                     * 
                     */
                    int64_t GetPolicyType() const;

                    /**
                     * 设置风险类型
                     * @param _policyType 风险类型
                     * 
                     */
                    void SetPolicyType(const int64_t& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取策略id
                     * @return PolicyId 策略id
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置策略id
                     * @param _policyId 策略id
                     * 
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取策略级别
                     * @return PolicyLevel 策略级别
                     * 
                     */
                    int64_t GetPolicyLevel() const;

                    /**
                     * 设置策略级别
                     * @param _policyLevel 策略级别
                     * 
                     */
                    void SetPolicyLevel(const int64_t& _policyLevel);

                    /**
                     * 判断参数 PolicyLevel 是否已赋值
                     * @return PolicyLevel 是否已赋值
                     * 
                     */
                    bool PolicyLevelHasBeenSet() const;

                    /**
                     * 获取策略描述
                     * @return PolicyDescription 策略描述
                     * 
                     */
                    std::string GetPolicyDescription() const;

                    /**
                     * 设置策略描述
                     * @param _policyDescription 策略描述
                     * 
                     */
                    void SetPolicyDescription(const std::string& _policyDescription);

                    /**
                     * 判断参数 PolicyDescription 是否已赋值
                     * @return PolicyDescription 是否已赋值
                     * 
                     */
                    bool PolicyDescriptionHasBeenSet() const;

                    /**
                     * 获取访问方式
                     * @return BucketAccessWay 访问方式
                     * 
                     */
                    std::string GetBucketAccessWay() const;

                    /**
                     * 设置访问方式
                     * @param _bucketAccessWay 访问方式
                     * 
                     */
                    void SetBucketAccessWay(const std::string& _bucketAccessWay);

                    /**
                     * 判断参数 BucketAccessWay 是否已赋值
                     * @return BucketAccessWay 是否已赋值
                     * 
                     */
                    bool BucketAccessWayHasBeenSet() const;

                    /**
                     * 获取标签信息
                     * @return BucketTagInfo 标签信息
                     * 
                     */
                    std::string GetBucketTagInfo() const;

                    /**
                     * 设置标签信息
                     * @param _bucketTagInfo 标签信息
                     * 
                     */
                    void SetBucketTagInfo(const std::string& _bucketTagInfo);

                    /**
                     * 判断参数 BucketTagInfo 是否已赋值
                     * @return BucketTagInfo 是否已赋值
                     * 
                     */
                    bool BucketTagInfoHasBeenSet() const;

                    /**
                     * 获取风险id
                     * @return RiskId 风险id
                     * 
                     */
                    int64_t GetRiskId() const;

                    /**
                     * 设置风险id
                     * @param _riskId 风险id
                     * 
                     */
                    void SetRiskId(const int64_t& _riskId);

                    /**
                     * 判断参数 RiskId 是否已赋值
                     * @return RiskId 是否已赋值
                     * 
                     */
                    bool RiskIdHasBeenSet() const;

                    /**
                     * 获取cos地域码值
                     * @return BucketRegionCode cos地域码值
                     * 
                     */
                    std::string GetBucketRegionCode() const;

                    /**
                     * 设置cos地域码值
                     * @param _bucketRegionCode cos地域码值
                     * 
                     */
                    void SetBucketRegionCode(const std::string& _bucketRegionCode);

                    /**
                     * 判断参数 BucketRegionCode 是否已赋值
                     * @return BucketRegionCode 是否已赋值
                     * 
                     */
                    bool BucketRegionCodeHasBeenSet() const;

                    /**
                     * 获取是否开启自动监测状态 0 关闭 1 开启
                     * @return BucketMonitorStatus 是否开启自动监测状态 0 关闭 1 开启
                     * 
                     */
                    uint64_t GetBucketMonitorStatus() const;

                    /**
                     * 设置是否开启自动监测状态 0 关闭 1 开启
                     * @param _bucketMonitorStatus 是否开启自动监测状态 0 关闭 1 开启
                     * 
                     */
                    void SetBucketMonitorStatus(const uint64_t& _bucketMonitorStatus);

                    /**
                     * 判断参数 BucketMonitorStatus 是否已赋值
                     * @return BucketMonitorStatus 是否已赋值
                     * 
                     */
                    bool BucketMonitorStatusHasBeenSet() const;

                private:

                    /**
                     * appid
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 桶名
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 桶地域
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * 桶备注信息
                     */
                    std::string m_bucketMarker;
                    bool m_bucketMarkerHasBeenSet;

                    /**
                     * 桶uin
                     */
                    std::string m_bucketUin;
                    bool m_bucketUinHasBeenSet;

                    /**
                     * uin昵称
                     */
                    std::string m_bucketNickName;
                    bool m_bucketNickNameHasBeenSet;

                    /**
                     * uin主账号昵称
                     */
                    std::string m_bucketMainNickName;
                    bool m_bucketMainNickNameHasBeenSet;

                    /**
                     * uin身份
                     */
                    int64_t m_bucketIdentify;
                    bool m_bucketIdentifyHasBeenSet;

                    /**
                     * 风险检出时间Unix时间单位毫秒
                     */
                    int64_t m_lastScanTimestamp;
                    bool m_lastScanTimestampHasBeenSet;

                    /**
                     * 状态信息
                     */
                    int64_t m_handleStatus;
                    bool m_handleStatusHasBeenSet;

                    /**
                     * 风险名称
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 风险类型
                     */
                    int64_t m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 策略id
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 策略级别
                     */
                    int64_t m_policyLevel;
                    bool m_policyLevelHasBeenSet;

                    /**
                     * 策略描述
                     */
                    std::string m_policyDescription;
                    bool m_policyDescriptionHasBeenSet;

                    /**
                     * 访问方式
                     */
                    std::string m_bucketAccessWay;
                    bool m_bucketAccessWayHasBeenSet;

                    /**
                     * 标签信息
                     */
                    std::string m_bucketTagInfo;
                    bool m_bucketTagInfoHasBeenSet;

                    /**
                     * 风险id
                     */
                    int64_t m_riskId;
                    bool m_riskIdHasBeenSet;

                    /**
                     * cos地域码值
                     */
                    std::string m_bucketRegionCode;
                    bool m_bucketRegionCodeHasBeenSet;

                    /**
                     * 是否开启自动监测状态 0 关闭 1 开启
                     */
                    uint64_t m_bucketMonitorStatus;
                    bool m_bucketMonitorStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSRISKBUCKETINFO_H_
