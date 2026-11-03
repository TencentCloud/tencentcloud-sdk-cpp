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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_QUARATYPEDICTITEM_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_QUARATYPEDICTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 自定义隔离模式的告警类型字典条目（灰度规则系统下发）
                */
                class QuaraTypeDictItem : public AbstractModel
                {
                public:
                    QuaraTypeDictItem();
                    ~QuaraTypeDictItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>告警类型标识，与 QuaraTypes 取值一致</p>
                     * @return Code <p>告警类型标识，与 QuaraTypes 取值一致</p>
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置<p>告警类型标识，与 QuaraTypes 取值一致</p>
                     * @param _code <p>告警类型标识，与 QuaraTypes 取值一致</p>
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取<p>展示类型名</p>
                     * @return Name <p>展示类型名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>展示类型名</p>
                     * @param _name <p>展示类型名</p>
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
                     * 获取<p>是否推荐隔离</p>
                     * @return Recommend <p>是否推荐隔离</p>
                     * 
                     */
                    bool GetRecommend() const;

                    /**
                     * 设置<p>是否推荐隔离</p>
                     * @param _recommend <p>是否推荐隔离</p>
                     * 
                     */
                    void SetRecommend(const bool& _recommend);

                    /**
                     * 判断参数 Recommend 是否已赋值
                     * @return Recommend 是否已赋值
                     * 
                     */
                    bool RecommendHasBeenSet() const;

                    /**
                     * 获取<p>描述和建议</p>
                     * @return Desc <p>描述和建议</p>
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置<p>描述和建议</p>
                     * @param _desc <p>描述和建议</p>
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                private:

                    /**
                     * <p>告警类型标识，与 QuaraTypes 取值一致</p>
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * <p>展示类型名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>是否推荐隔离</p>
                     */
                    bool m_recommend;
                    bool m_recommendHasBeenSet;

                    /**
                     * <p>描述和建议</p>
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_QUARATYPEDICTITEM_H_
