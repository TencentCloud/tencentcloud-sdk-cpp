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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_IPSTATIC_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_IPSTATIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 统计折线图通用结构体
                */
                class IpStatic : public AbstractModel
                {
                public:
                    IpStatic();
                    ~IpStatic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取值
                     * @return Num 值
                     * 
                     */
                    int64_t GetNum() const;

                    /**
                     * 设置值
                     * @param _num 值
                     * 
                     */
                    void SetNum(const int64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                    /**
                     * 获取折线图横坐标时间
                     * @return StatTime 折线图横坐标时间
                     * 
                     */
                    std::string GetStatTime() const;

                    /**
                     * 设置折线图横坐标时间
                     * @param _statTime 折线图横坐标时间
                     * 
                     */
                    void SetStatTime(const std::string& _statTime);

                    /**
                     * 判断参数 StatTime 是否已赋值
                     * @return StatTime 是否已赋值
                     * 
                     */
                    bool StatTimeHasBeenSet() const;

                private:

                    /**
                     * 值
                     */
                    int64_t m_num;
                    bool m_numHasBeenSet;

                    /**
                     * 折线图横坐标时间
                     */
                    std::string m_statTime;
                    bool m_statTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_IPSTATIC_H_
