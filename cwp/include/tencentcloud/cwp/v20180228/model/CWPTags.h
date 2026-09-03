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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CWPTAGS_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CWPTAGS_H_

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
                * 主机标签
                */
                class CWPTags : public AbstractModel
                {
                public:
                    CWPTags();
                    ~CWPTags() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>记录ID</p>
                     * @return Rid <p>记录ID</p>
                     * 
                     */
                    int64_t GetRid() const;

                    /**
                     * 设置<p>记录ID</p>
                     * @param _rid <p>记录ID</p>
                     * 
                     */
                    void SetRid(const int64_t& _rid);

                    /**
                     * 判断参数 Rid 是否已赋值
                     * @return Rid 是否已赋值
                     * 
                     */
                    bool RidHasBeenSet() const;

                    /**
                     * 获取<p>标签名</p>
                     * @return Name <p>标签名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>标签名</p>
                     * @param _name <p>标签名</p>
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
                     * 获取<p>标签ID</p>
                     * @return TagId <p>标签ID</p>
                     * 
                     */
                    int64_t GetTagId() const;

                    /**
                     * 设置<p>标签ID</p>
                     * @param _tagId <p>标签ID</p>
                     * 
                     */
                    void SetTagId(const int64_t& _tagId);

                    /**
                     * 判断参数 TagId 是否已赋值
                     * @return TagId 是否已赋值
                     * 
                     */
                    bool TagIdHasBeenSet() const;

                private:

                    /**
                     * <p>记录ID</p>
                     */
                    int64_t m_rid;
                    bool m_ridHasBeenSet;

                    /**
                     * <p>标签名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>标签ID</p>
                     */
                    int64_t m_tagId;
                    bool m_tagIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CWPTAGS_H_
