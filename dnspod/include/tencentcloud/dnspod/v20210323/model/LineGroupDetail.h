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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_LINEGROUPDETAIL_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_LINEGROUPDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 自定义线路分组详细信息
                */
                class LineGroupDetail : public AbstractModel
                {
                public:
                    LineGroupDetail();
                    ~LineGroupDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义线路分组ID
                     * @return Id 自定义线路分组ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置自定义线路分组ID
                     * @param _id 自定义线路分组ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取自定线路分组名称
                     * @return Name 自定线路分组名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置自定线路分组名称
                     * @param _name 自定线路分组名称
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
                     * 获取自定义线路分组包含的线路列表
                     * @return Lines 自定义线路分组包含的线路列表
                     * 
                     */
                    std::vector<std::string> GetLines() const;

                    /**
                     * 设置自定义线路分组包含的线路列表
                     * @param _lines 自定义线路分组包含的线路列表
                     * 
                     */
                    void SetLines(const std::vector<std::string>& _lines);

                    /**
                     * 判断参数 Lines 是否已赋值
                     * @return Lines 是否已赋值
                     * 
                     */
                    bool LinesHasBeenSet() const;

                private:

                    /**
                     * 自定义线路分组ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 自定线路分组名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 自定义线路分组包含的线路列表
                     */
                    std::vector<std::string> m_lines;
                    bool m_linesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_LINEGROUPDETAIL_H_
