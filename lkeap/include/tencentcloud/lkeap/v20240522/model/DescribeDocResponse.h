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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_DESCRIBEDOCRESPONSE_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_DESCRIBEDOCRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lkeap/v20240522/model/AttributeLabelReferItem.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * DescribeDoc返回参数结构体
                */
                class DescribeDocResponse : public AbstractModel
                {
                public:
                    DescribeDocResponse();
                    ~DescribeDocResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文档ID
                     * @return DocId 文档ID
                     * 
                     */
                    std::string GetDocId() const;

                    /**
                     * 判断参数 DocId 是否已赋值
                     * @return DocId 是否已赋值
                     * 
                     */
                    bool DocIdHasBeenSet() const;

                    /**
                     * 获取状态，

- Uploading  上传中  
- Auditing 审核中
- Parsing 解析中  
- ParseFailed 解析失败
- Indexing 创建索引中  
- IndexFailed 创建索引失败
- Success  发布成功
- Failed  失败
                     * @return Status 状态，

- Uploading  上传中  
- Auditing 审核中
- Parsing 解析中  
- ParseFailed 解析失败
- Indexing 创建索引中  
- IndexFailed 创建索引失败
- Success  发布成功
- Failed  失败
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取文件名
                     * @return FileName 文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取属性标签
                     * @return AttributeLabels 属性标签
                     * 
                     */
                    std::vector<AttributeLabelReferItem> GetAttributeLabels() const;

                    /**
                     * 判断参数 AttributeLabels 是否已赋值
                     * @return AttributeLabels 是否已赋值
                     * 
                     */
                    bool AttributeLabelsHasBeenSet() const;

                private:

                    /**
                     * 文档ID
                     */
                    std::string m_docId;
                    bool m_docIdHasBeenSet;

                    /**
                     * 状态，

- Uploading  上传中  
- Auditing 审核中
- Parsing 解析中  
- ParseFailed 解析失败
- Indexing 创建索引中  
- IndexFailed 创建索引失败
- Success  发布成功
- Failed  失败
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 属性标签
                     */
                    std::vector<AttributeLabelReferItem> m_attributeLabels;
                    bool m_attributeLabelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_DESCRIBEDOCRESPONSE_H_
