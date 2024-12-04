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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_ATTRLABELREFER_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_ATTRLABELREFER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 标签引用信息
                */
                class AttrLabelRefer : public AbstractModel
                {
                public:
                    AttrLabelRefer();
                    ~AttrLabelRefer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签来源，1：标签
                     * @return Source 标签来源，1：标签
                     * 
                     */
                    uint64_t GetSource() const;

                    /**
                     * 设置标签来源，1：标签
                     * @param _source 标签来源，1：标签
                     * 
                     */
                    void SetSource(const uint64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取标签ID
                     * @return AttributeBizId 标签ID
                     * 
                     */
                    std::string GetAttributeBizId() const;

                    /**
                     * 设置标签ID
                     * @param _attributeBizId 标签ID
                     * 
                     */
                    void SetAttributeBizId(const std::string& _attributeBizId);

                    /**
                     * 判断参数 AttributeBizId 是否已赋值
                     * @return AttributeBizId 是否已赋值
                     * 
                     */
                    bool AttributeBizIdHasBeenSet() const;

                    /**
                     * 获取标签值ID
                     * @return LabelBizIds 标签值ID
                     * 
                     */
                    std::vector<std::string> GetLabelBizIds() const;

                    /**
                     * 设置标签值ID
                     * @param _labelBizIds 标签值ID
                     * 
                     */
                    void SetLabelBizIds(const std::vector<std::string>& _labelBizIds);

                    /**
                     * 判断参数 LabelBizIds 是否已赋值
                     * @return LabelBizIds 是否已赋值
                     * 
                     */
                    bool LabelBizIdsHasBeenSet() const;

                private:

                    /**
                     * 标签来源，1：标签
                     */
                    uint64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 标签ID
                     */
                    std::string m_attributeBizId;
                    bool m_attributeBizIdHasBeenSet;

                    /**
                     * 标签值ID
                     */
                    std::vector<std::string> m_labelBizIds;
                    bool m_labelBizIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_ATTRLABELREFER_H_
