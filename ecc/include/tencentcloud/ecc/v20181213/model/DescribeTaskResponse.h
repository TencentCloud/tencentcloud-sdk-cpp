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

#ifndef TENCENTCLOUD_ECC_V20181213_MODEL_DESCRIBETASKRESPONSE_H_
#define TENCENTCLOUD_ECC_V20181213_MODEL_DESCRIBETASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecc/v20181213/model/CorrectData.h>


namespace TencentCloud
{
    namespace Ecc
    {
        namespace V20181213
        {
            namespace Model
            {
                /**
                * DescribeTask返回参数结构体
                */
                class DescribeTaskResponse : public AbstractModel
                {
                public:
                    DescribeTaskResponse();
                    ~DescribeTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取作文识别文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 作文识别文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取整体的批改结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CorrectData 整体的批改结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CorrectData GetCorrectData() const;

                    /**
                     * 判断参数 CorrectData 是否已赋值
                     * @return CorrectData 是否已赋值
                     * 
                     */
                    bool CorrectDataHasBeenSet() const;

                    /**
                     * 获取任务状态，“Progressing”: 处理中（此时无结果返回）、“Finished”: 处理完成
                     * @return Status 任务状态，“Progressing”: 处理中（此时无结果返回）、“Finished”: 处理完成
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 作文识别文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 整体的批改结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CorrectData m_correctData;
                    bool m_correctDataHasBeenSet;

                    /**
                     * 任务状态，“Progressing”: 处理中（此时无结果返回）、“Finished”: 处理完成
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECC_V20181213_MODEL_DESCRIBETASKRESPONSE_H_
