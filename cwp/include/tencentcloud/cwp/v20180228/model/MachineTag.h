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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MACHINETAG_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MACHINETAG_H_

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
                * 服务器标签信息
                */
                class MachineTag : public AbstractModel
                {
                public:
                    MachineTag();
                    ~MachineTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关联标签ID
                     * @return Rid 关联标签ID
                     * 
                     */
                    int64_t GetRid() const;

                    /**
                     * 设置关联标签ID
                     * @param _rid 关联标签ID
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
                     * 获取标签名
                     * @return Name 标签名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置标签名
                     * @param _name 标签名
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
                     * 获取标签ID
                     * @return TagId 标签ID
                     * 
                     */
                    uint64_t GetTagId() const;

                    /**
                     * 设置标签ID
                     * @param _tagId 标签ID
                     * 
                     */
                    void SetTagId(const uint64_t& _tagId);

                    /**
                     * 判断参数 TagId 是否已赋值
                     * @return TagId 是否已赋值
                     * 
                     */
                    bool TagIdHasBeenSet() const;

                private:

                    /**
                     * 关联标签ID
                     */
                    int64_t m_rid;
                    bool m_ridHasBeenSet;

                    /**
                     * 标签名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 标签ID
                     */
                    uint64_t m_tagId;
                    bool m_tagIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MACHINETAG_H_
