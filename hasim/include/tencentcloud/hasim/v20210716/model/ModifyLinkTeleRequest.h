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

#ifndef TENCENTCLOUD_HASIM_V20210716_MODEL_MODIFYLINKTELEREQUEST_H_
#define TENCENTCLOUD_HASIM_V20210716_MODEL_MODIFYLINKTELEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hasim
    {
        namespace V20210716
        {
            namespace Model
            {
                /**
                * ModifyLinkTele请求参数结构体
                */
                class ModifyLinkTeleRequest : public AbstractModel
                {
                public:
                    ModifyLinkTeleRequest();
                    ~ModifyLinkTeleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云兔ID
                     * @return LinkID 云兔ID
                     * 
                     */
                    int64_t GetLinkID() const;

                    /**
                     * 设置云兔ID
                     * @param _linkID 云兔ID
                     * 
                     */
                    void SetLinkID(const int64_t& _linkID);

                    /**
                     * 判断参数 LinkID 是否已赋值
                     * @return LinkID 是否已赋值
                     * 
                     */
                    bool LinkIDHasBeenSet() const;

                    /**
                     * 获取运营商 1 移动 2 联通 3 电信
                     * @return TeleOperator 运营商 1 移动 2 联通 3 电信
                     * 
                     */
                    int64_t GetTeleOperator() const;

                    /**
                     * 设置运营商 1 移动 2 联通 3 电信
                     * @param _teleOperator 运营商 1 移动 2 联通 3 电信
                     * 
                     */
                    void SetTeleOperator(const int64_t& _teleOperator);

                    /**
                     * 判断参数 TeleOperator 是否已赋值
                     * @return TeleOperator 是否已赋值
                     * 
                     */
                    bool TeleOperatorHasBeenSet() const;

                private:

                    /**
                     * 云兔ID
                     */
                    int64_t m_linkID;
                    bool m_linkIDHasBeenSet;

                    /**
                     * 运营商 1 移动 2 联通 3 电信
                     */
                    int64_t m_teleOperator;
                    bool m_teleOperatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HASIM_V20210716_MODEL_MODIFYLINKTELEREQUEST_H_
