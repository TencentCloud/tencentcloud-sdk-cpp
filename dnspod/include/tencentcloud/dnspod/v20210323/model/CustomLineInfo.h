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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_CUSTOMLINEINFO_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_CUSTOMLINEINFO_H_

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
                * 自定义线路详情
                */
                class CustomLineInfo : public AbstractModel
                {
                public:
                    CustomLineInfo();
                    ~CustomLineInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名ID
                     * @return DomainId 域名ID
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置域名ID
                     * @param _domainId 域名ID
                     * 
                     */
                    void SetDomainId(const uint64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取自定义线路名称
                     * @return Name 自定义线路名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置自定义线路名称
                     * @param _name 自定义线路名称
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
                     * 获取自定义线路IP段
                     * @return Area 自定义线路IP段
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置自定义线路IP段
                     * @param _area 自定义线路IP段
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取已使用IP段个数
                     * @return UseCount 已使用IP段个数
                     * 
                     */
                    uint64_t GetUseCount() const;

                    /**
                     * 设置已使用IP段个数
                     * @param _useCount 已使用IP段个数
                     * 
                     */
                    void SetUseCount(const uint64_t& _useCount);

                    /**
                     * 判断参数 UseCount 是否已赋值
                     * @return UseCount 是否已赋值
                     * 
                     */
                    bool UseCountHasBeenSet() const;

                    /**
                     * 获取允许使用IP段最大个数
                     * @return MaxCount 允许使用IP段最大个数
                     * 
                     */
                    uint64_t GetMaxCount() const;

                    /**
                     * 设置允许使用IP段最大个数
                     * @param _maxCount 允许使用IP段最大个数
                     * 
                     */
                    void SetMaxCount(const uint64_t& _maxCount);

                    /**
                     * 判断参数 MaxCount 是否已赋值
                     * @return MaxCount 是否已赋值
                     * 
                     */
                    bool MaxCountHasBeenSet() const;

                private:

                    /**
                     * 域名ID
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 自定义线路名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 自定义线路IP段
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 已使用IP段个数
                     */
                    uint64_t m_useCount;
                    bool m_useCountHasBeenSet;

                    /**
                     * 允许使用IP段最大个数
                     */
                    uint64_t m_maxCount;
                    bool m_maxCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_CUSTOMLINEINFO_H_
