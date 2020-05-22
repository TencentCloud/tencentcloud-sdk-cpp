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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_MEDIAINFOTYPEGJH_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_MEDIAINFOTYPEGJH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * 媒体信息
                */
                class MediaInfoTypeGjh : public AbstractModel
                {
                public:
                    MediaInfoTypeGjh();
                    ~MediaInfoTypeGjh() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取动作
                     * @return StrAction 动作
                     */
                    std::string GetStrAction() const;

                    /**
                     * 设置动作
                     * @param StrAction 动作
                     */
                    void SetStrAction(const std::string& _strAction);

                    /**
                     * 判断参数 StrAction 是否已赋值
                     * @return StrAction 是否已赋值
                     */
                    bool StrActionHasBeenSet() const;

                    /**
                     * 获取内容
                     * @return StrContent 内容
                     */
                    std::string GetStrContent() const;

                    /**
                     * 设置内容
                     * @param StrContent 内容
                     */
                    void SetStrContent(const std::string& _strContent);

                    /**
                     * 判断参数 StrContent 是否已赋值
                     * @return StrContent 是否已赋值
                     */
                    bool StrContentHasBeenSet() const;

                    /**
                     * 获取文件ID
                     * @return StrFileID 文件ID
                     */
                    std::string GetStrFileID() const;

                    /**
                     * 设置文件ID
                     * @param StrFileID 文件ID
                     */
                    void SetStrFileID(const std::string& _strFileID);

                    /**
                     * 判断参数 StrFileID 是否已赋值
                     * @return StrFileID 是否已赋值
                     */
                    bool StrFileIDHasBeenSet() const;

                    /**
                     * 获取md5，填了可提高识别率
                     * @return StrMD5 md5，填了可提高识别率
                     */
                    std::string GetStrMD5() const;

                    /**
                     * 设置md5，填了可提高识别率
                     * @param StrMD5 md5，填了可提高识别率
                     */
                    void SetStrMD5(const std::string& _strMD5);

                    /**
                     * 判断参数 StrMD5 是否已赋值
                     * @return StrMD5 是否已赋值
                     */
                    bool StrMD5HasBeenSet() const;

                    /**
                     * 获取Sha
                     * @return StrSha Sha
                     */
                    std::string GetStrSha() const;

                    /**
                     * 设置Sha
                     * @param StrSha Sha
                     */
                    void SetStrSha(const std::string& _strSha);

                    /**
                     * 判断参数 StrSha 是否已赋值
                     * @return StrSha 是否已赋值
                     */
                    bool StrShaHasBeenSet() const;

                    /**
                     * 获取标题
                     * @return StrTitle 标题
                     */
                    std::string GetStrTitle() const;

                    /**
                     * 设置标题
                     * @param StrTitle 标题
                     */
                    void SetStrTitle(const std::string& _strTitle);

                    /**
                     * 判断参数 StrTitle 是否已赋值
                     * @return StrTitle 是否已赋值
                     */
                    bool StrTitleHasBeenSet() const;

                    /**
                     * 获取url
                     * @return StrUrl url
                     */
                    std::string GetStrUrl() const;

                    /**
                     * 设置url
                     * @param StrUrl url
                     */
                    void SetStrUrl(const std::string& _strUrl);

                    /**
                     * 判断参数 StrUrl 是否已赋值
                     * @return StrUrl 是否已赋值
                     */
                    bool StrUrlHasBeenSet() const;

                    /**
                     * 获取大小
                     * @return UiSize 大小
                     */
                    int64_t GetUiSize() const;

                    /**
                     * 设置大小
                     * @param UiSize 大小
                     */
                    void SetUiSize(const int64_t& _uiSize);

                    /**
                     * 判断参数 UiSize 是否已赋值
                     * @return UiSize 是否已赋值
                     */
                    bool UiSizeHasBeenSet() const;

                private:

                    /**
                     * 动作
                     */
                    std::string m_strAction;
                    bool m_strActionHasBeenSet;

                    /**
                     * 内容
                     */
                    std::string m_strContent;
                    bool m_strContentHasBeenSet;

                    /**
                     * 文件ID
                     */
                    std::string m_strFileID;
                    bool m_strFileIDHasBeenSet;

                    /**
                     * md5，填了可提高识别率
                     */
                    std::string m_strMD5;
                    bool m_strMD5HasBeenSet;

                    /**
                     * Sha
                     */
                    std::string m_strSha;
                    bool m_strShaHasBeenSet;

                    /**
                     * 标题
                     */
                    std::string m_strTitle;
                    bool m_strTitleHasBeenSet;

                    /**
                     * url
                     */
                    std::string m_strUrl;
                    bool m_strUrlHasBeenSet;

                    /**
                     * 大小
                     */
                    int64_t m_uiSize;
                    bool m_uiSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_MEDIAINFOTYPEGJH_H_
