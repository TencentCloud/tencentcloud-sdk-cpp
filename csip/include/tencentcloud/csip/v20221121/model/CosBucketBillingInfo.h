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
                     * 获取<p>appid</p>
                     * @return AppId <p>appid</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>appid</p>
                     * @param _appId <p>appid</p>
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
                     * 获取<p>uin</p>
                     * @return OwnerUin <p>uin</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>uin</p>
                     * @param _ownerUin <p>uin</p>
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
                     * 获取<p>昵称</p>
                     * @return OwnerNickName <p>昵称</p>
                     * 
                     */
                    std::string GetOwnerNickName() const;

                    /**
                     * 设置<p>昵称</p>
                     * @param _ownerNickName <p>昵称</p>
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
                     * 获取<p>存储桶数量</p>
                     * @return BucketCount <p>存储桶数量</p>
                     * 
                     */
                    uint64_t GetBucketCount() const;

                    /**
                     * 设置<p>存储桶数量</p>
                     * @param _bucketCount <p>存储桶数量</p>
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
                     * 获取<p>0 未购买 1  已单独购买 2 已被共享</p>
                     * @return BuyStatus <p>0 未购买 1  已单独购买 2 已被共享</p>
                     * 
                     */
                    uint64_t GetBuyStatus() const;

                    /**
                     * 设置<p>0 未购买 1  已单独购买 2 已被共享</p>
                     * @param _buyStatus <p>0 未购买 1  已单独购买 2 已被共享</p>
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
                     * 获取<p>共享账号appid</p>
                     * @return ShareFromAppId <p>共享账号appid</p>
                     * 
                     */
                    uint64_t GetShareFromAppId() const;

                    /**
                     * 设置<p>共享账号appid</p>
                     * @param _shareFromAppId <p>共享账号appid</p>
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
                     * 获取<p>共享账号uin</p>
                     * @return ShareFromUin <p>共享账号uin</p>
                     * 
                     */
                    std::string GetShareFromUin() const;

                    /**
                     * 设置<p>共享账号uin</p>
                     * @param _shareFromUin <p>共享账号uin</p>
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
                     * 获取<p>共享账号昵称</p>
                     * @return ShareFromNickName <p>共享账号昵称</p>
                     * 
                     */
                    std::string GetShareFromNickName() const;

                    /**
                     * 设置<p>共享账号昵称</p>
                     * @param _shareFromNickName <p>共享账号昵称</p>
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
                     * 获取<p>监控的存储桶数</p>
                     * @return MonitorBucketCount <p>监控的存储桶数</p>
                     * 
                     */
                    uint64_t GetMonitorBucketCount() const;

                    /**
                     * 设置<p>监控的存储桶数</p>
                     * @param _monitorBucketCount <p>监控的存储桶数</p>
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
                     * 获取<p>0 关闭 1 开启</p>
                     * @return IsAutoMonitor <p>0 关闭 1 开启</p>
                     * 
                     */
                    uint64_t GetIsAutoMonitor() const;

                    /**
                     * 设置<p>0 关闭 1 开启</p>
                     * @param _isAutoMonitor <p>0 关闭 1 开启</p>
                     * 
                     */
                    void SetIsAutoMonitor(const uint64_t& _isAutoMonitor);

                    /**
                     * 判断参数 IsAutoMonitor 是否已赋值
                     * @return IsAutoMonitor 是否已赋值
                     * 
                     */
                    bool IsAutoMonitorHasBeenSet() const;

                    /**
                     * 获取<p>是否启用白名单日志功能</p>
                     * @return LogFeatureWhitelist <p>是否启用白名单日志功能</p>
                     * 
                     */
                    bool GetLogFeatureWhitelist() const;

                    /**
                     * 设置<p>是否启用白名单日志功能</p>
                     * @param _logFeatureWhitelist <p>是否启用白名单日志功能</p>
                     * 
                     */
                    void SetLogFeatureWhitelist(const bool& _logFeatureWhitelist);

                    /**
                     * 判断参数 LogFeatureWhitelist 是否已赋值
                     * @return LogFeatureWhitelist 是否已赋值
                     * 
                     */
                    bool LogFeatureWhitelistHasBeenSet() const;

                    /**
                     * 获取<p>是否存在新的后付费订单</p>
                     * @return IsHaveNewPostOrder <p>是否存在新的后付费订单</p>
                     * 
                     */
                    bool GetIsHaveNewPostOrder() const;

                    /**
                     * 设置<p>是否存在新的后付费订单</p>
                     * @param _isHaveNewPostOrder <p>是否存在新的后付费订单</p>
                     * 
                     */
                    void SetIsHaveNewPostOrder(const bool& _isHaveNewPostOrder);

                    /**
                     * 判断参数 IsHaveNewPostOrder 是否已赋值
                     * @return IsHaveNewPostOrder 是否已赋值
                     * 
                     */
                    bool IsHaveNewPostOrderHasBeenSet() const;

                    /**
                     * 获取<p>是否存在旧后付费订单</p>
                     * @return IsHaveOldPostOrder <p>是否存在旧后付费订单</p>
                     * 
                     */
                    bool GetIsHaveOldPostOrder() const;

                    /**
                     * 设置<p>是否存在旧后付费订单</p>
                     * @param _isHaveOldPostOrder <p>是否存在旧后付费订单</p>
                     * 
                     */
                    void SetIsHaveOldPostOrder(const bool& _isHaveOldPostOrder);

                    /**
                     * 判断参数 IsHaveOldPostOrder 是否已赋值
                     * @return IsHaveOldPostOrder 是否已赋值
                     * 
                     */
                    bool IsHaveOldPostOrderHasBeenSet() const;

                    /**
                     * 获取<p>后付费产品列表</p>
                     * @return PostProductList <p>后付费产品列表</p>
                     * 
                     */
                    std::vector<int64_t> GetPostProductList() const;

                    /**
                     * 设置<p>后付费产品列表</p>
                     * @param _postProductList <p>后付费产品列表</p>
                     * 
                     */
                    void SetPostProductList(const std::vector<int64_t>& _postProductList);

                    /**
                     * 判断参数 PostProductList 是否已赋值
                     * @return PostProductList 是否已赋值
                     * 
                     */
                    bool PostProductListHasBeenSet() const;

                private:

                    /**
                     * <p>appid</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>uin</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>昵称</p>
                     */
                    std::string m_ownerNickName;
                    bool m_ownerNickNameHasBeenSet;

                    /**
                     * <p>存储桶数量</p>
                     */
                    uint64_t m_bucketCount;
                    bool m_bucketCountHasBeenSet;

                    /**
                     * <p>0 未购买 1  已单独购买 2 已被共享</p>
                     */
                    uint64_t m_buyStatus;
                    bool m_buyStatusHasBeenSet;

                    /**
                     * <p>共享账号appid</p>
                     */
                    uint64_t m_shareFromAppId;
                    bool m_shareFromAppIdHasBeenSet;

                    /**
                     * <p>共享账号uin</p>
                     */
                    std::string m_shareFromUin;
                    bool m_shareFromUinHasBeenSet;

                    /**
                     * <p>共享账号昵称</p>
                     */
                    std::string m_shareFromNickName;
                    bool m_shareFromNickNameHasBeenSet;

                    /**
                     * <p>监控的存储桶数</p>
                     */
                    uint64_t m_monitorBucketCount;
                    bool m_monitorBucketCountHasBeenSet;

                    /**
                     * <p>0 关闭 1 开启</p>
                     */
                    uint64_t m_isAutoMonitor;
                    bool m_isAutoMonitorHasBeenSet;

                    /**
                     * <p>是否启用白名单日志功能</p>
                     */
                    bool m_logFeatureWhitelist;
                    bool m_logFeatureWhitelistHasBeenSet;

                    /**
                     * <p>是否存在新的后付费订单</p>
                     */
                    bool m_isHaveNewPostOrder;
                    bool m_isHaveNewPostOrderHasBeenSet;

                    /**
                     * <p>是否存在旧后付费订单</p>
                     */
                    bool m_isHaveOldPostOrder;
                    bool m_isHaveOldPostOrderHasBeenSet;

                    /**
                     * <p>后付费产品列表</p>
                     */
                    std::vector<int64_t> m_postProductList;
                    bool m_postProductListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSBUCKETBILLINGINFO_H_
