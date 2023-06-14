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

#ifndef TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEMODELDEFINITIONRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEMODELDEFINITIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideo/v20201215/model/ProductModelDefinition.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20201215
        {
            namespace Model
            {
                /**
                * DescribeModelDefinition返回参数结构体
                */
                class DescribeModelDefinitionResponse : public AbstractModel
                {
                public:
                    DescribeModelDefinitionResponse();
                    ~DescribeModelDefinitionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取产品数据模板
                     * @return Model 产品数据模板
                     * 
                     */
                    ProductModelDefinition GetModel() const;

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                private:

                    /**
                     * 产品数据模板
                     */
                    ProductModelDefinition m_model;
                    bool m_modelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEMODELDEFINITIONRESPONSE_H_
