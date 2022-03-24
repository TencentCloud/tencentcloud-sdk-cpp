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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_CHECKSIMILARPERSONREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_CHECKSIMILARPERSONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
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
数组元素取值为创建人员库接口中的GroupId
                     * @return GroupIds 待整理的人员库列表。 
人员库总人数不可超过200万，人员库个数不可超过10个。
数组元素取值为创建人员库接口中的GroupId
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置待整理的人员库列表。 
人员库总人数不可超过200万，人员库个数不可超过10个。
数组元素取值为创建人员库接口中的GroupId
                     * @param GroupIds 待整理的人员库列表。 
人员库总人数不可超过200万，人员库个数不可超过10个。
数组元素取值为创建人员库接口中的GroupId
                     */
                    void SetGroupIds(const std::vector<std::string>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     */
                    bool GroupIdsHasBeenSet() const;

                    /**
                     * 获取人员查重整理力度的控制。
1：力度较高的人员整理，能够消除更多的重复身份，对应稍高的非重复身份误清除率；
2：力度较低的人员整理，非重复身份的误清除率较低，对应稍低的重复身份消除率。
                     * @return UniquePersonControl 人员查重整理力度的控制。
1：力度较高的人员整理，能够消除更多的重复身份，对应稍高的非重复身份误清除率；
2：力度较低的人员整理，非重复身份的误清除率较低，对应稍低的重复身份消除率。
                     */
                    int64_t GetUniquePersonControl() const;

                    /**
                     * 设置人员查重整理力度的控制。
1：力度较高的人员整理，能够消除更多的重复身份，对应稍高的非重复身份误清除率；
2：力度较低的人员整理，非重复身份的误清除率较低，对应稍低的重复身份消除率。
                     * @param UniquePersonControl 人员查重整理力度的控制。
1：力度较高的人员整理，能够消除更多的重复身份，对应稍高的非重复身份误清除率；
2：力度较低的人员整理，非重复身份的误清除率较低，对应稍低的重复身份消除率。
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
数组元素取值为创建人员库接口中的GroupId
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * 人员查重整理力度的控制。
1：力度较高的人员整理，能够消除更多的重复身份，对应稍高的非重复身份误清除率；
2：力度较低的人员整理，非重复身份的误清除率较低，对应稍低的重复身份消除率。
                     */
                    int64_t m_uniquePersonControl;
                    bool m_uniquePersonControlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_CHECKSIMILARPERSONREQUEST_H_
