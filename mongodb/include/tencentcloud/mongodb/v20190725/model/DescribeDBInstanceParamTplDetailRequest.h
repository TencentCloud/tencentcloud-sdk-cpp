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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEPARAMTPLDETAILREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEPARAMTPLDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceParamTplDetail请求参数结构体
                */
                class DescribeDBInstanceParamTplDetailRequest : public AbstractModel
                {
                public:
                    DescribeDBInstanceParamTplDetailRequest();
                    ~DescribeDBInstanceParamTplDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取参数模板 ID。
                     * @return TplId 参数模板 ID。
                     * 
                     */
                    std::string GetTplId() const;

                    /**
                     * 设置参数模板 ID。
                     * @param _tplId 参数模板 ID。
                     * 
                     */
                    void SetTplId(const std::string& _tplId);

                    /**
                     * 判断参数 TplId 是否已赋值
                     * @return TplId 是否已赋值
                     * 
                     */
                    bool TplIdHasBeenSet() const;

                    /**
                     * 获取参数名称，传入该值，则只会获取该字段的参数详情。为空时，返回全部参数。
                     * @return ParamName 参数名称，传入该值，则只会获取该字段的参数详情。为空时，返回全部参数。
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置参数名称，传入该值，则只会获取该字段的参数详情。为空时，返回全部参数。
                     * @param _paramName 参数名称，传入该值，则只会获取该字段的参数详情。为空时，返回全部参数。
                     * 
                     */
                    void SetParamName(const std::string& _paramName);

                    /**
                     * 判断参数 ParamName 是否已赋值
                     * @return ParamName 是否已赋值
                     * 
                     */
                    bool ParamNameHasBeenSet() const;

                private:

                    /**
                     * 参数模板 ID。
                     */
                    std::string m_tplId;
                    bool m_tplIdHasBeenSet;

                    /**
                     * 参数名称，传入该值，则只会获取该字段的参数详情。为空时，返回全部参数。
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEPARAMTPLDETAILREQUEST_H_
