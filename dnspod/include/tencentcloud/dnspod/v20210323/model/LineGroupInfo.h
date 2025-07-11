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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_LINEGROUPINFO_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_LINEGROUPINFO_H_

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
                * 线路分组信息
                */
                class LineGroupInfo : public AbstractModel
                {
                public:
                    LineGroupInfo();
                    ~LineGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取线路分组ID
                     * @return LineId 线路分组ID
                     * 
                     */
                    std::string GetLineId() const;

                    /**
                     * 设置线路分组ID
                     * @param _lineId 线路分组ID
                     * 
                     */
                    void SetLineId(const std::string& _lineId);

                    /**
                     * 判断参数 LineId 是否已赋值
                     * @return LineId 是否已赋值
                     * 
                     */
                    bool LineIdHasBeenSet() const;

                    /**
                     * 获取线路分组名称
                     * @return Name 线路分组名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置线路分组名称
                     * @param _name 线路分组名称
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
                     * 获取分组类型
                     * @return Type 分组类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置分组类型
                     * @param _type 分组类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取线路分组包含的线路列表
                     * @return LineList 线路分组包含的线路列表
                     * 
                     */
                    std::vector<std::string> GetLineList() const;

                    /**
                     * 设置线路分组包含的线路列表
                     * @param _lineList 线路分组包含的线路列表
                     * 
                     */
                    void SetLineList(const std::vector<std::string>& _lineList);

                    /**
                     * 判断参数 LineList 是否已赋值
                     * @return LineList 是否已赋值
                     * 
                     */
                    bool LineListHasBeenSet() const;

                private:

                    /**
                     * 线路分组ID
                     */
                    std::string m_lineId;
                    bool m_lineIdHasBeenSet;

                    /**
                     * 线路分组名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 分组类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 线路分组包含的线路列表
                     */
                    std::vector<std::string> m_lineList;
                    bool m_lineListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_LINEGROUPINFO_H_
