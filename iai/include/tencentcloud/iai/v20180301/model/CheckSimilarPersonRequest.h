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

#ifndef TENCENTCLOUD_IAI_V20180301_MODEL_CHECKSIMILARPERSONREQUEST_H_
#define TENCENTCLOUD_IAI_V20180301_MODEL_CHECKSIMILARPERSONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * CheckSimilarPerson请求参数结构体
                */
                class CheckSimilarPersonRequest : public AbstractModel
                {
                public:
                    CheckSimilarPersonRequest();
                    ~CheckSimilarPersonRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待整理的人员库列表。 
人员库总人数不可超过200万，人员库个数不可超过10个。
                     * @return GroupIds 待整理的人员库列表。 
人员库总人数不可超过200万，人员库个数不可超过10个。
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置待整理的人员库列表。 
人员库总人数不可超过200万，人员库个数不可超过10个。
                     * @param GroupIds 待整理的人员库列表。 
人员库总人数不可超过200万，人员库个数不可超过10个。
                     */
                    void SetGroupIds(const std::vector<std::string>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     */
                    bool GroupIdsHasBeenSet() const;

                    /**
                     * 获取疑似同一人判断控制。  
1：宽松的同一人要求； 
2：严格的同一人要求。  
注： 要求越高，则疑似同一人的概率越小。
                     * @return UniquePersonControl 疑似同一人判断控制。  
1：宽松的同一人要求； 
2：严格的同一人要求。  
注： 要求越高，则疑似同一人的概率越小。
                     */
                    int64_t GetUniquePersonControl() const;

                    /**
                     * 设置疑似同一人判断控制。  
1：宽松的同一人要求； 
2：严格的同一人要求。  
注： 要求越高，则疑似同一人的概率越小。
                     * @param UniquePersonControl 疑似同一人判断控制。  
1：宽松的同一人要求； 
2：严格的同一人要求。  
注： 要求越高，则疑似同一人的概率越小。
                     */
                    void SetUniquePersonControl(const int64_t& _uniquePersonControl);

                    /**
                     * 判断参数 UniquePersonControl 是否已赋值
                     * @return UniquePersonControl 是否已赋值
                     */
                    bool UniquePersonControlHasBeenSet() const;

                private:

                    /**
                     * 待整理的人员库列表。 
人员库总人数不可超过200万，人员库个数不可超过10个。
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * 疑似同一人判断控制。  
1：宽松的同一人要求； 
2：严格的同一人要求。  
注： 要求越高，则疑似同一人的概率越小。
                     */
                    int64_t m_uniquePersonControl;
                    bool m_uniquePersonControlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_CHECKSIMILARPERSONREQUEST_H_
