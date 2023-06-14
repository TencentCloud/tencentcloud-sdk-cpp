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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_USERANGE_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_USERANGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * 曲库包用途信息
                */
                class UseRange : public AbstractModel
                {
                public:
                    UseRange();
                    ~UseRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用途id
                     * @return UseRangeId 用途id
                     * 
                     */
                    int64_t GetUseRangeId() const;

                    /**
                     * 设置用途id
                     * @param _useRangeId 用途id
                     * 
                     */
                    void SetUseRangeId(const int64_t& _useRangeId);

                    /**
                     * 判断参数 UseRangeId 是否已赋值
                     * @return UseRangeId 是否已赋值
                     * 
                     */
                    bool UseRangeIdHasBeenSet() const;

                    /**
                     * 获取用途范围名称
                     * @return Name 用途范围名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置用途范围名称
                     * @param _name 用途范围名称
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
                     * 用途id
                     */
                    int64_t m_useRangeId;
                    bool m_useRangeIdHasBeenSet;

                    /**
                     * 用途范围名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_USERANGE_H_
