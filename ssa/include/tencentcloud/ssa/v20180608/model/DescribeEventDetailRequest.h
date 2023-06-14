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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBEEVENTDETAILREQUEST_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBEEVENTDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeEventDetail请求参数结构体
                */
                class DescribeEventDetailRequest : public AbstractModel
                {
                public:
                    DescribeEventDetailRequest();
                    ~DescribeEventDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取事件索引名
                     * @return Index 事件索引名
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置事件索引名
                     * @param _index 事件索引名
                     * 
                     */
                    void SetIndex(const std::string& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取事件id
                     * @return Id 事件id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置事件id
                     * @param _id 事件id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取事件来源
                     * @return Source 事件来源
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置事件来源
                     * @param _source 事件来源
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取事件子类型
                     * @return SubEventType 事件子类型
                     * 
                     */
                    uint64_t GetSubEventType() const;

                    /**
                     * 设置事件子类型
                     * @param _subEventType 事件子类型
                     * 
                     */
                    void SetSubEventType(const uint64_t& _subEventType);

                    /**
                     * 判断参数 SubEventType 是否已赋值
                     * @return SubEventType 是否已赋值
                     * 
                     */
                    bool SubEventTypeHasBeenSet() const;

                    /**
                     * 获取事件名称
                     * @return Name 事件名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置事件名称
                     * @param _name 事件名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 事件索引名
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 事件id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 事件来源
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 事件子类型
                     */
                    uint64_t m_subEventType;
                    bool m_subEventTypeHasBeenSet;

                    /**
                     * 事件名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBEEVENTDETAILREQUEST_H_
