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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_LABELREFIDENTITY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_LABELREFIDENTITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 标签引用身份标识（入参用）
                */
                class LabelRefIdentity : public AbstractModel
                {
                public:
                    LabelRefIdentity();
                    ~LabelRefIdentity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>标签 ID</p>
                     * @return LabelId <p>标签 ID</p>
                     * 
                     */
                    std::string GetLabelId() const;

                    /**
                     * 设置<p>标签 ID</p>
                     * @param _labelId <p>标签 ID</p>
                     * 
                     */
                    void SetLabelId(const std::string& _labelId);

                    /**
                     * 判断参数 LabelId 是否已赋值
                     * @return LabelId 是否已赋值
                     * 
                     */
                    bool LabelIdHasBeenSet() const;

                    /**
                     * 获取<p>标签标准词 ID 列表</p>
                     * @return LabelTermIdList <p>标签标准词 ID 列表</p>
                     * 
                     */
                    std::vector<std::string> GetLabelTermIdList() const;

                    /**
                     * 设置<p>标签标准词 ID 列表</p>
                     * @param _labelTermIdList <p>标签标准词 ID 列表</p>
                     * 
                     */
                    void SetLabelTermIdList(const std::vector<std::string>& _labelTermIdList);

                    /**
                     * 判断参数 LabelTermIdList 是否已赋值
                     * @return LabelTermIdList 是否已赋值
                     * 
                     */
                    bool LabelTermIdListHasBeenSet() const;

                private:

                    /**
                     * <p>标签 ID</p>
                     */
                    std::string m_labelId;
                    bool m_labelIdHasBeenSet;

                    /**
                     * <p>标签标准词 ID 列表</p>
                     */
                    std::vector<std::string> m_labelTermIdList;
                    bool m_labelTermIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_LABELREFIDENTITY_H_
