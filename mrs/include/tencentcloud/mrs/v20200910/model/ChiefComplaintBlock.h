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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_CHIEFCOMPLAINTBLOCK_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_CHIEFCOMPLAINTBLOCK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/ChiefComplaintDetailBlock.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 主诉
                */
                class ChiefComplaintBlock : public AbstractModel
                {
                public:
                    ChiefComplaintBlock();
                    ~ChiefComplaintBlock() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取原文
                     * @return Src 原文
                     * 
                     */
                    std::string GetSrc() const;

                    /**
                     * 设置原文
                     * @param _src 原文
                     * 
                     */
                    void SetSrc(const std::string& _src);

                    /**
                     * 判断参数 Src 是否已赋值
                     * @return Src 是否已赋值
                     * 
                     */
                    bool SrcHasBeenSet() const;

                    /**
                     * 获取单位输出值
                     * @return Value 单位输出值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置单位输出值
                     * @param _value 单位输出值
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取主诉详情
                     * @return Detail 主诉详情
                     * 
                     */
                    std::vector<ChiefComplaintDetailBlock> GetDetail() const;

                    /**
                     * 设置主诉详情
                     * @param _detail 主诉详情
                     * 
                     */
                    void SetDetail(const std::vector<ChiefComplaintDetailBlock>& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                private:

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 原文
                     */
                    std::string m_src;
                    bool m_srcHasBeenSet;

                    /**
                     * 单位输出值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 主诉详情
                     */
                    std::vector<ChiefComplaintDetailBlock> m_detail;
                    bool m_detailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_CHIEFCOMPLAINTBLOCK_H_
