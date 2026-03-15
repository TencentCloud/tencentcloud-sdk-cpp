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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCSUBJECTOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCSUBJECTOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 创建主体输出信息。
                */
                class CreateAigcSubjectOutput : public AbstractModel
                {
                public:
                    CreateAigcSubjectOutput();
                    ~CreateAigcSubjectOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>主体ID。</p>
                     * @return SubjectId <p>主体ID。</p>
                     * 
                     */
                    std::string GetSubjectId() const;

                    /**
                     * 设置<p>主体ID。</p>
                     * @param _subjectId <p>主体ID。</p>
                     * 
                     */
                    void SetSubjectId(const std::string& _subjectId);

                    /**
                     * 判断参数 SubjectId 是否已赋值
                     * @return SubjectId 是否已赋值
                     * 
                     */
                    bool SubjectIdHasBeenSet() const;

                    /**
                     * 获取<p>主体信息。</p>
                     * @return SubjectInfo <p>主体信息。</p>
                     * 
                     */
                    std::string GetSubjectInfo() const;

                    /**
                     * 设置<p>主体信息。</p>
                     * @param _subjectInfo <p>主体信息。</p>
                     * 
                     */
                    void SetSubjectInfo(const std::string& _subjectInfo);

                    /**
                     * 判断参数 SubjectInfo 是否已赋值
                     * @return SubjectInfo 是否已赋值
                     * 
                     */
                    bool SubjectInfoHasBeenSet() const;

                private:

                    /**
                     * <p>主体ID。</p>
                     */
                    std::string m_subjectId;
                    bool m_subjectIdHasBeenSet;

                    /**
                     * <p>主体信息。</p>
                     */
                    std::string m_subjectInfo;
                    bool m_subjectInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCSUBJECTOUTPUT_H_
