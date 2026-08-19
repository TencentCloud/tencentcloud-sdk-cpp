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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_AIANALYSISSESSION_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_AIANALYSISSESSION_H_

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
                * AI安全助手会话信息
                */
                class AIAnalysisSession : public AbstractModel
                {
                public:
                    AIAnalysisSession();
                    ~AIAnalysisSession() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标题
                     * @return Title 标题
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置标题
                     * @param _title 标题
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取会话ID
                     * @return SessionID 会话ID
                     * 
                     */
                    std::string GetSessionID() const;

                    /**
                     * 设置会话ID
                     * @param _sessionID 会话ID
                     * 
                     */
                    void SetSessionID(const std::string& _sessionID);

                    /**
                     * 判断参数 SessionID 是否已赋值
                     * @return SessionID 是否已赋值
                     * 
                     */
                    bool SessionIDHasBeenSet() const;

                    /**
                     * 获取最后修改的时间戳
                     * @return ModifyTime 最后修改的时间戳
                     * 
                     */
                    int64_t GetModifyTime() const;

                    /**
                     * 设置最后修改的时间戳
                     * @param _modifyTime 最后修改的时间戳
                     * 
                     */
                    void SetModifyTime(const int64_t& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取是否置顶
                     * @return IsPinned 是否置顶
                     * 
                     */
                    bool GetIsPinned() const;

                    /**
                     * 设置是否置顶
                     * @param _isPinned 是否置顶
                     * 
                     */
                    void SetIsPinned(const bool& _isPinned);

                    /**
                     * 判断参数 IsPinned 是否已赋值
                     * @return IsPinned 是否已赋值
                     * 
                     */
                    bool IsPinnedHasBeenSet() const;

                private:

                    /**
                     * 标题
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 会话ID
                     */
                    std::string m_sessionID;
                    bool m_sessionIDHasBeenSet;

                    /**
                     * 最后修改的时间戳
                     */
                    int64_t m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 是否置顶
                     */
                    bool m_isPinned;
                    bool m_isPinnedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_AIANALYSISSESSION_H_
