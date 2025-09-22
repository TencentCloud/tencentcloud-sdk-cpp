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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATEOWNNUMBERAPPLYREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATEOWNNUMBERAPPLYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/OwnNumberApplyDetailItem.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * CreateOwnNumberApply请求参数结构体
                */
                class CreateOwnNumberApplyRequest : public AbstractModel
                {
                public:
                    CreateOwnNumberApplyRequest();
                    ~CreateOwnNumberApplyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @return SdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @param _sdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取SIP通道ID
                     * @return SipTrunkId SIP通道ID
                     * 
                     */
                    int64_t GetSipTrunkId() const;

                    /**
                     * 设置SIP通道ID
                     * @param _sipTrunkId SIP通道ID
                     * 
                     */
                    void SetSipTrunkId(const int64_t& _sipTrunkId);

                    /**
                     * 判断参数 SipTrunkId 是否已赋值
                     * @return SipTrunkId 是否已赋值
                     * 
                     */
                    bool SipTrunkIdHasBeenSet() const;

                    /**
                     * 获取线路相关参数
                     * @return DetailList 线路相关参数
                     * 
                     */
                    std::vector<OwnNumberApplyDetailItem> GetDetailList() const;

                    /**
                     * 设置线路相关参数
                     * @param _detailList 线路相关参数
                     * 
                     */
                    void SetDetailList(const std::vector<OwnNumberApplyDetailItem>& _detailList);

                    /**
                     * 判断参数 DetailList 是否已赋值
                     * @return DetailList 是否已赋值
                     * 
                     */
                    bool DetailListHasBeenSet() const;

                    /**
                     * 获取送号前缀
                     * @return Prefix 送号前缀
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置送号前缀
                     * @param _prefix 送号前缀
                     * 
                     */
                    void SetPrefix(const std::string& _prefix);

                    /**
                     * 判断参数 Prefix 是否已赋值
                     * @return Prefix 是否已赋值
                     * 
                     */
                    bool PrefixHasBeenSet() const;

                    /**
                     * 获取国内长途手机前缀码
                     * @return MobileNddPrefix 国内长途手机前缀码
                     * 
                     */
                    std::string GetMobileNddPrefix() const;

                    /**
                     * 设置国内长途手机前缀码
                     * @param _mobileNddPrefix 国内长途手机前缀码
                     * 
                     */
                    void SetMobileNddPrefix(const std::string& _mobileNddPrefix);

                    /**
                     * 判断参数 MobileNddPrefix 是否已赋值
                     * @return MobileNddPrefix 是否已赋值
                     * 
                     */
                    bool MobileNddPrefixHasBeenSet() const;

                    /**
                     * 获取同市固话去掉区号
                     * @return LocalNumberTrimAC 同市固话去掉区号
                     * 
                     */
                    bool GetLocalNumberTrimAC() const;

                    /**
                     * 设置同市固话去掉区号
                     * @param _localNumberTrimAC 同市固话去掉区号
                     * 
                     */
                    void SetLocalNumberTrimAC(const bool& _localNumberTrimAC);

                    /**
                     * 判断参数 LocalNumberTrimAC 是否已赋值
                     * @return LocalNumberTrimAC 是否已赋值
                     * 
                     */
                    bool LocalNumberTrimACHasBeenSet() const;

                private:

                    /**
                     * 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * SIP通道ID
                     */
                    int64_t m_sipTrunkId;
                    bool m_sipTrunkIdHasBeenSet;

                    /**
                     * 线路相关参数
                     */
                    std::vector<OwnNumberApplyDetailItem> m_detailList;
                    bool m_detailListHasBeenSet;

                    /**
                     * 送号前缀
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * 国内长途手机前缀码
                     */
                    std::string m_mobileNddPrefix;
                    bool m_mobileNddPrefixHasBeenSet;

                    /**
                     * 同市固话去掉区号
                     */
                    bool m_localNumberTrimAC;
                    bool m_localNumberTrimACHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATEOWNNUMBERAPPLYREQUEST_H_
