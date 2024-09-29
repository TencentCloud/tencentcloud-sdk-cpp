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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_MODIFYOWNNUMBERAPPLYREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_MODIFYOWNNUMBERAPPLYREQUEST_H_

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
                * ModifyOwnNumberApply请求参数结构体
                */
                class ModifyOwnNumberApplyRequest : public AbstractModel
                {
                public:
                    ModifyOwnNumberApplyRequest();
                    ~ModifyOwnNumberApplyRequest() = default;
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
                     * 获取审批单号
                     * @return ApplyId 审批单号
                     * 
                     */
                    uint64_t GetApplyId() const;

                    /**
                     * 设置审批单号
                     * @param _applyId 审批单号
                     * 
                     */
                    void SetApplyId(const uint64_t& _applyId);

                    /**
                     * 判断参数 ApplyId 是否已赋值
                     * @return ApplyId 是否已赋值
                     * 
                     */
                    bool ApplyIdHasBeenSet() const;

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

                private:

                    /**
                     * 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 线路相关参数
                     */
                    std::vector<OwnNumberApplyDetailItem> m_detailList;
                    bool m_detailListHasBeenSet;

                    /**
                     * 审批单号
                     */
                    uint64_t m_applyId;
                    bool m_applyIdHasBeenSet;

                    /**
                     * 送号前缀
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_MODIFYOWNNUMBERAPPLYREQUEST_H_
