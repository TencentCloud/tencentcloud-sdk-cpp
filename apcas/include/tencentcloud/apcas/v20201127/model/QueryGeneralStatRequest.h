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

#ifndef TENCENTCLOUD_APCAS_V20201127_MODEL_QUERYGENERALSTATREQUEST_H_
#define TENCENTCLOUD_APCAS_V20201127_MODEL_QUERYGENERALSTATREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apcas
    {
        namespace V20201127
        {
            namespace Model
            {
                /**
                * QueryGeneralStat请求参数结构体
                */
                class QueryGeneralStatRequest : public AbstractModel
                {
                public:
                    QueryGeneralStatRequest();
                    ~QueryGeneralStatRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取请求类型:1,人群特征洞察统计 2购车意向预测统计
                     * @return Type 请求类型:1,人群特征洞察统计 2购车意向预测统计
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置请求类型:1,人群特征洞察统计 2购车意向预测统计
                     * @param _type 请求类型:1,人群特征洞察统计 2购车意向预测统计
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 请求类型:1,人群特征洞察统计 2购车意向预测统计
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APCAS_V20201127_MODEL_QUERYGENERALSTATREQUEST_H_
