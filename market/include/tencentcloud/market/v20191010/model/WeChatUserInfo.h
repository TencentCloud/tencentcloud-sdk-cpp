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

#ifndef TENCENTCLOUD_MARKET_V20191010_MODEL_WECHATUSERINFO_H_
#define TENCENTCLOUD_MARKET_V20191010_MODEL_WECHATUSERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Market
    {
        namespace V20191010
        {
            namespace Model
            {
                /**
                * 企业微信用户信息

                */
                class WeChatUserInfo : public AbstractModel
                {
                public:
                    WeChatUserInfo();
                    ~WeChatUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户企业的corpid
                     * @return PaidCorpId 客户企业的corpid
                     */
                    std::string GetPaidCorpId() const;

                    /**
                     * 设置客户企业的corpid
                     * @param PaidCorpId 客户企业的corpid
                     */
                    void SetPaidCorpId(const std::string& _paidCorpId);

                    /**
                     * 判断参数 PaidCorpId 是否已赋值
                     * @return PaidCorpId 是否已赋值
                     */
                    bool PaidCorpIdHasBeenSet() const;

                    /**
                     * 获取客户企业的Corp全称
                     * @return PaidCorpName 客户企业的Corp全称
                     */
                    std::string GetPaidCorpName() const;

                    /**
                     * 设置客户企业的Corp全称
                     * @param PaidCorpName 客户企业的Corp全称
                     */
                    void SetPaidCorpName(const std::string& _paidCorpName);

                    /**
                     * 判断参数 PaidCorpName 是否已赋值
                     * @return PaidCorpName 是否已赋值
                     */
                    bool PaidCorpNameHasBeenSet() const;

                private:

                    /**
                     * 客户企业的corpid
                     */
                    std::string m_paidCorpId;
                    bool m_paidCorpIdHasBeenSet;

                    /**
                     * 客户企业的Corp全称
                     */
                    std::string m_paidCorpName;
                    bool m_paidCorpNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARKET_V20191010_MODEL_WECHATUSERINFO_H_
