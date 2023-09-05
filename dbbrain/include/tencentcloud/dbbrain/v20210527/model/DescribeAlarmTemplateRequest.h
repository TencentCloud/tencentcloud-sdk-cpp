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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEALARMTEMPLATEREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEALARMTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeAlarmTemplate请求参数结构体
                */
                class DescribeAlarmTemplateRequest : public AbstractModel
                {
                public:
                    DescribeAlarmTemplateRequest();
                    ~DescribeAlarmTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取搜索字段
                     * @return TemplateNameRegexp 搜索字段
                     * 
                     */
                    std::string GetTemplateNameRegexp() const;

                    /**
                     * 设置搜索字段
                     * @param _templateNameRegexp 搜索字段
                     * 
                     */
                    void SetTemplateNameRegexp(const std::string& _templateNameRegexp);

                    /**
                     * 判断参数 TemplateNameRegexp 是否已赋值
                     * @return TemplateNameRegexp 是否已赋值
                     * 
                     */
                    bool TemplateNameRegexpHasBeenSet() const;

                    /**
                     * 获取返回限制长度
                     * @return Limit 返回限制长度
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回限制长度
                     * @param _limit 返回限制长度
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏置
                     * @return Offset 偏置
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏置
                     * @param _offset 偏置
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取mysql -  mysql
cynosdb -  tdsql-c
                     * @return Product mysql -  mysql
cynosdb -  tdsql-c
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置mysql -  mysql
cynosdb -  tdsql-c
                     * @param _product mysql -  mysql
cynosdb -  tdsql-c
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * 搜索字段
                     */
                    std::string m_templateNameRegexp;
                    bool m_templateNameRegexpHasBeenSet;

                    /**
                     * 返回限制长度
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏置
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * mysql -  mysql
cynosdb -  tdsql-c
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEALARMTEMPLATEREQUEST_H_
