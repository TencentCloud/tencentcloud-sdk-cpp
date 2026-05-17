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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSBUCKETBILLINGINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSBUCKETBILLINGINFO_H_

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
                * 存储桶数量
                */
                class CosBucketBillingInfo : public AbstractModel
                {
                public:
                    CosBucketBillingInfo();
                    ~CosBucketBillingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取appid
                     * @return AppId appid
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置appid
                     * @param _appId appid
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
                     * 获取uin
                     * @return OwnerUin uin
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置uin
                     * @param _ownerUin uin
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取昵称
                     * @return OwnerNickName 昵称
                     * 
                     */
                    std::string GetOwnerNickName() const;

                    /**
                     * 设置昵称
                     * @param _ownerNickName 昵称
                     * 
                     */
                    void SetOwnerNickName(const std::string& _ownerNickName);

                    /**
                     * 判断参数 OwnerNickName 是否已赋值
                     * @return OwnerNickName 是否已赋值
                     * 
                     */
                    bool OwnerNickNameHasBeenSet() const;

                    /**
                     * 获取存储桶数量
                     * @return BucketCount 存储桶数量
                     * 
                     */
                    uint64_t GetBucketCount() const;

                    /**
                     * 设置存储桶数量
                     * @param _bucketCount 存储桶数量
                     * 
                     */
                    void SetBucketCount(const uint64_t& _bucketCount);

                    /**
                     * 判断参数 BucketCount 是否已赋值
                     * @return BucketCount 是否已赋值
                     * 
                     */
                    bool BucketCountHasBeenSet() const;

                    /**
                     * 获取0 未购买 1  已单独购买 2 已被共享
                     * @return BuyStatus 0 未购买 1  已单独购买 2 已被共享
                     * 
                     */
                    uint64_t GetBuyStatus() const;

                    /**
                     * 设置0 未购买 1  已单独购买 2 已被共享
                     * @param _buyStatus 0 未购买 1  已单独购买 2 已被共享
                     * 
                     */
                    void SetBuyStatus(const uint64_t& _buyStatus);

                    /**
                     * 判断参数 BuyStatus 是否已赋值
                     * @return BuyStatus 是否已赋值
                     * 
                     */
                    bool BuyStatusHasBeenSet() const;

                    /**
                     * 获取共享账号appid
                     * @return ShareFromAppId 共享账号appid
                     * 
                     */
                    uint64_t GetShareFromAppId() const;

                    /**
                     * 设置共享账号appid
                     * @param _shareFromAppId 共享账号appid
                     * 
                     */
                    void SetShareFromAppId(const uint64_t& _shareFromAppId);

                    /**
                     * 判断参数 ShareFromAppId 是否已赋值
                     * @return ShareFromAppId 是否已赋值
                     * 
                     */
                    bool ShareFromAppIdHasBeenSet() const;

                    /**
                     * 获取共享账号uin
                     * @return ShareFromUin 共享账号uin
                     * 
                     */
                    std::string GetShareFromUin() const;

                    /**
                     * 设置共享账号uin
                     * @param _shareFromUin 共享账号uin
                     * 
                     */
                    void SetShareFromUin(const std::string& _shareFromUin);

                    /**
                     * 判断参数 ShareFromUin 是否已赋值
                     * @return ShareFromUin 是否已赋值
                     * 
                     */
                    bool ShareFromUinHasBeenSet() const;

                    /**
                     * 获取共享账号昵称
                     * @return ShareFromNickName 共享账号昵称
                     * 
                     */
                    std::string GetShareFromNickName() const;

                    /**
                     * 设置共享账号昵称
                     * @param _shareFromNickName 共享账号昵称
                     * 
                     */
                    void SetShareFromNickName(const std::string& _shareFromNickName);

                    /**
                     * 判断参数 ShareFromNickName 是否已赋值
                     * @return ShareFromNickName 是否已赋值
                     * 
                     */
                    bool ShareFromNickNameHasBeenSet() const;

                    /**
                     * 获取监控的存储桶数
                     * @return MonitorBucketCount 监控的存储桶数
                     * 
                     */
                    uint64_t GetMonitorBucketCount() const;

                    /**
                     * 设置监控的存储桶数
                     * @param _monitorBucketCount 监控的存储桶数
                     * 
                     */
                    void SetMonitorBucketCount(const uint64_t& _monitorBucketCount);

                    /**
                     * 判断参数 MonitorBucketCount 是否已赋值
                     * @return MonitorBucketCount 是否已赋值
                     * 
                     */
                    bool MonitorBucketCountHasBeenSet() const;

                    /**
                     * 获取0 关闭 1 开启
                     * @return IsAutoMonitor 0 关闭 1 开启
                     * 
                     */
                    uint64_t GetIsAutoMonitor() const;

                    /**
                     * 设置0 关闭 1 开启
                     * @param _isAutoMonitor 0 关闭 1 开启
                     * 
                     */
                    void SetIsAutoMonitor(const uint64_t& _isAutoMonitor);

                    /**
                     * 判断参数 IsAutoMonitor 是否已赋值
                     * @return IsAutoMonitor 是否已赋值
                     * 
                     */
                    bool IsAutoMonitorHasBeenSet() const;

                private:

                    /**
                     * appid
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * uin
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 昵称
                     */
                    std::string m_ownerNickName;
                    bool m_ownerNickNameHasBeenSet;

                    /**
                     * 存储桶数量
                     */
                    uint64_t m_bucketCount;
                    bool m_bucketCountHasBeenSet;

                    /**
                     * 0 未购买 1  已单独购买 2 已被共享
                     */
                    uint64_t m_buyStatus;
                    bool m_buyStatusHasBeenSet;

                    /**
                     * 共享账号appid
                     */
                    uint64_t m_shareFromAppId;
                    bool m_shareFromAppIdHasBeenSet;

                    /**
                     * 共享账号uin
                     */
                    std::string m_shareFromUin;
                    bool m_shareFromUinHasBeenSet;

                    /**
                     * 共享账号昵称
                     */
                    std::string m_shareFromNickName;
                    bool m_shareFromNickNameHasBeenSet;

                    /**
                     * 监控的存储桶数
                     */
                    uint64_t m_monitorBucketCount;
                    bool m_monitorBucketCountHasBeenSet;

                    /**
                     * 0 关闭 1 开启
                     */
                    uint64_t m_isAutoMonitor;
                    bool m_isAutoMonitorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSBUCKETBILLINGINFO_H_
