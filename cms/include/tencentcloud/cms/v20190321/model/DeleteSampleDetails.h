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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_DELETESAMPLEDETAILS_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_DELETESAMPLEDETAILS_H_

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
                * 词库关键词删除结果详情
                */
                class DeleteSampleDetails : public AbstractModel
                {
                public:
                    DeleteSampleDetails();
                    ~DeleteSampleDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关键词ID
                     * @return SampleID 关键词ID
                     * 
                     */
                    std::string GetSampleID() const;

                    /**
                     * 设置关键词ID
                     * @param _sampleID 关键词ID
                     * 
                     */
                    void SetSampleID(const std::string& _sampleID);

                    /**
                     * 判断参数 SampleID 是否已赋值
                     * @return SampleID 是否已赋值
                     * 
                     */
                    bool SampleIDHasBeenSet() const;

                    /**
                     * 获取关键词内容
                     * @return Content 关键词内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置关键词内容
                     * @param _content 关键词内容
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
                     * 获取是否删除成功
                     * @return Deleted 是否删除成功
                     * 
                     */
                    bool GetDeleted() const;

                    /**
                     * 设置是否删除成功
                     * @param _deleted 是否删除成功
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
                     * 获取错误信息
                     * @return ErrorInfo 错误信息
                     * 
                     */
                    std::string GetErrorInfo() const;

                    /**
                     * 设置错误信息
                     * @param _errorInfo 错误信息
                     * 
                     */
                    void SetErrorInfo(const std::string& _errorInfo);

                    /**
                     * 判断参数 ErrorInfo 是否已赋值
                     * @return ErrorInfo 是否已赋值
                     * 
                     */
                    bool ErrorInfoHasBeenSet() const;

                private:

                    /**
                     * 关键词ID
                     */
                    std::string m_sampleID;
                    bool m_sampleIDHasBeenSet;

                    /**
                     * 关键词内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 是否删除成功
                     */
                    bool m_deleted;
                    bool m_deletedHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_errorInfo;
                    bool m_errorInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_DELETESAMPLEDETAILS_H_
