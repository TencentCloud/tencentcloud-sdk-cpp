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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_GETPERSONLISTNUMREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_GETPERSONLISTNUMREQUEST_H_

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
                * GetPersonListNum请求参数结构体
                */
                class GetPersonListNumRequest : public AbstractModel
                {
                public:
                    GetPersonListNumRequest();
                    ~GetPersonListNumRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取人员库ID，取值为创建人员库接口中的GroupId。
                     * @return GroupId 人员库ID，取值为创建人员库接口中的GroupId。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置人员库ID，取值为创建人员库接口中的GroupId。
                     * @param _groupId 人员库ID，取值为创建人员库接口中的GroupId。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * 人员库ID，取值为创建人员库接口中的GroupId。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_GETPERSONLISTNUMREQUEST_H_
