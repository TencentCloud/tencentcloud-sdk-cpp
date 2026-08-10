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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULCOMPONENTSUMMARY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULCOMPONENTSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 主机漏洞组件概要
                */
                class VulComponentSummary : public AbstractModel
                {
                public:
                    VulComponentSummary();
                    ~VulComponentSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>组件名称</p>
                     * @return Name <p>组件名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>组件名称</p>
                     * @param _name <p>组件名称</p>
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
                     * 获取<p>关联主机数</p>
                     * @return RelateHostCount <p>关联主机数</p>
                     * 
                     */
                    uint64_t GetRelateHostCount() const;

                    /**
                     * 设置<p>关联主机数</p>
                     * @param _relateHostCount <p>关联主机数</p>
                     * 
                     */
                    void SetRelateHostCount(const uint64_t& _relateHostCount);

                    /**
                     * 判断参数 RelateHostCount 是否已赋值
                     * @return RelateHostCount 是否已赋值
                     * 
                     */
                    bool RelateHostCountHasBeenSet() const;

                private:

                    /**
                     * <p>组件名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>关联主机数</p>
                     */
                    uint64_t m_relateHostCount;
                    bool m_relateHostCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULCOMPONENTSUMMARY_H_
