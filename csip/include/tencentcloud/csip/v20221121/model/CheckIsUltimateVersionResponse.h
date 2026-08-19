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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CHECKISULTIMATEVERSIONRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CHECKISULTIMATEVERSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * CheckIsUltimateVersion返回参数结构体
                */
                class CheckIsUltimateVersionResponse : public AbstractModel
                {
                public:
                    CheckIsUltimateVersionResponse();
                    ~CheckIsUltimateVersionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>是否旗舰版用户</p>
                     * @return IsUltimateVersion <p>是否旗舰版用户</p>
                     * 
                     */
                    bool GetIsUltimateVersion() const;

                    /**
                     * 判断参数 IsUltimateVersion 是否已赋值
                     * @return IsUltimateVersion 是否已赋值
                     * 
                     */
                    bool IsUltimateVersionHasBeenSet() const;

                    /**
                     * 获取<p>是否新版旗舰版用户</p>
                     * @return IsNewUltimateVersion <p>是否新版旗舰版用户</p>
                     * 
                     */
                    bool GetIsNewUltimateVersion() const;

                    /**
                     * 判断参数 IsNewUltimateVersion 是否已赋值
                     * @return IsNewUltimateVersion 是否已赋值
                     * 
                     */
                    bool IsNewUltimateVersionHasBeenSet() const;

                private:

                    /**
                     * <p>是否旗舰版用户</p>
                     */
                    bool m_isUltimateVersion;
                    bool m_isUltimateVersionHasBeenSet;

                    /**
                     * <p>是否新版旗舰版用户</p>
                     */
                    bool m_isNewUltimateVersion;
                    bool m_isNewUltimateVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CHECKISULTIMATEVERSIONRESPONSE_H_
