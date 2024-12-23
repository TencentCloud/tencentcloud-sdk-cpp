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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEBINDDBLISTRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEBINDDBLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/DBInstanceInfo.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeBindDBList返回参数结构体
                */
                class DescribeBindDBListResponse : public AbstractModel
                {
                public:
                    DescribeBindDBListResponse();
                    ~DescribeBindDBListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取绑定的DB列表（已废弃）
                     * @return BindDBList 绑定的DB列表（已废弃）
                     * 
                     */
                    std::vector<std::string> GetBindDBList() const;

                    /**
                     * 判断参数 BindDBList 是否已赋值
                     * @return BindDBList 是否已赋值
                     * 
                     */
                    bool BindDBListHasBeenSet() const;

                    /**
                     * 获取绑定信息
                     * @return BindList 绑定信息
                     * 
                     */
                    std::vector<DBInstanceInfo> GetBindList() const;

                    /**
                     * 判断参数 BindList 是否已赋值
                     * @return BindList 是否已赋值
                     * 
                     */
                    bool BindListHasBeenSet() const;

                private:

                    /**
                     * 绑定的DB列表（已废弃）
                     */
                    std::vector<std::string> m_bindDBList;
                    bool m_bindDBListHasBeenSet;

                    /**
                     * 绑定信息
                     */
                    std::vector<DBInstanceInfo> m_bindList;
                    bool m_bindListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEBINDDBLISTRESPONSE_H_
