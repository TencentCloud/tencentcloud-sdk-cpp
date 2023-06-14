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

#ifndef TENCENTCLOUD_IOTTID_V20190411_MODEL_VERIFYCHIPBURNINFOREQUEST_H_
#define TENCENTCLOUD_IOTTID_V20190411_MODEL_VERIFYCHIPBURNINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iottid
    {
        namespace V20190411
        {
            namespace Model
            {
                /**
                * VerifyChipBurnInfo请求参数结构体
                */
                class VerifyChipBurnInfoRequest : public AbstractModel
                {
                public:
                    VerifyChipBurnInfoRequest();
                    ~VerifyChipBurnInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取验证数据
                     * @return Data 验证数据
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置验证数据
                     * @param _data 验证数据
                     * 
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 验证数据
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTTID_V20190411_MODEL_VERIFYCHIPBURNINFOREQUEST_H_
