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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTDESCRIBENAMELISTINFO_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTDESCRIBENAMELISTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20201103/model/OutputDescribeNameListFrontFix.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * 黑白名单信息
                */
                class OutputDescribeNameListInfo : public AbstractModel
                {
                public:
                    OutputDescribeNameListInfo();
                    ~OutputDescribeNameListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总数
                     * @return Count 总数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置总数
                     * @param _count 总数
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return List 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OutputDescribeNameListFrontFix> GetList() const;

                    /**
                     * 设置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _list 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetList(const std::vector<OutputDescribeNameListFrontFix>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OutputDescribeNameListFrontFix> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTDESCRIBENAMELISTINFO_H_
