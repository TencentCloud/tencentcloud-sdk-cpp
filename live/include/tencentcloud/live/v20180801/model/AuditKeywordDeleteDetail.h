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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_AUDITKEYWORDDELETEDETAIL_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_AUDITKEYWORDDELETEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 直播审核删除关键词结果详情。
                */
                class AuditKeywordDeleteDetail : public AbstractModel
                {
                public:
                    AuditKeywordDeleteDetail();
                    ~AuditKeywordDeleteDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关键词 Id。
                     * @return KeywordId 关键词 Id。
                     * 
                     */
                    std::string GetKeywordId() const;

                    /**
                     * 设置关键词 Id。
                     * @param _keywordId 关键词 Id。
                     * 
                     */
                    void SetKeywordId(const std::string& _keywordId);

                    /**
                     * 判断参数 KeywordId 是否已赋值
                     * @return KeywordId 是否已赋值
                     * 
                     */
                    bool KeywordIdHasBeenSet() const;

                    /**
                     * 获取关键词内容。
                     * @return Content 关键词内容。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置关键词内容。
                     * @param _content 关键词内容。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取是否删除成功。
                     * @return Deleted 是否删除成功。
                     * 
                     */
                    bool GetDeleted() const;

                    /**
                     * 设置是否删除成功。
                     * @param _deleted 是否删除成功。
                     * 
                     */
                    void SetDeleted(const bool& _deleted);

                    /**
                     * 判断参数 Deleted 是否已赋值
                     * @return Deleted 是否已赋值
                     * 
                     */
                    bool DeletedHasBeenSet() const;

                    /**
                     * 获取如果删除失败，错误信息。
                     * @return Error 如果删除失败，错误信息。
                     * 
                     */
                    std::string GetError() const;

                    /**
                     * 设置如果删除失败，错误信息。
                     * @param _error 如果删除失败，错误信息。
                     * 
                     */
                    void SetError(const std::string& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                private:

                    /**
                     * 关键词 Id。
                     */
                    std::string m_keywordId;
                    bool m_keywordIdHasBeenSet;

                    /**
                     * 关键词内容。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 是否删除成功。
                     */
                    bool m_deleted;
                    bool m_deletedHasBeenSet;

                    /**
                     * 如果删除失败，错误信息。
                     */
                    std::string m_error;
                    bool m_errorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_AUDITKEYWORDDELETEDETAIL_H_
