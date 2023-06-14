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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYSECLOGKAFKAUINREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYSECLOGKAFKAUINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ModifySecLogKafkaUIN请求参数结构体
                */
                class ModifySecLogKafkaUINRequest : public AbstractModel
                {
                public:
                    ModifySecLogKafkaUINRequest();
                    ~ModifySecLogKafkaUINRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目标UIN
                     * @return DstUIN 目标UIN
                     * 
                     */
                    std::string GetDstUIN() const;

                    /**
                     * 设置目标UIN
                     * @param _dstUIN 目标UIN
                     * 
                     */
                    void SetDstUIN(const std::string& _dstUIN);

                    /**
                     * 判断参数 DstUIN 是否已赋值
                     * @return DstUIN 是否已赋值
                     * 
                     */
                    bool DstUINHasBeenSet() const;

                private:

                    /**
                     * 目标UIN
                     */
                    std::string m_dstUIN;
                    bool m_dstUINHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYSECLOGKAFKAUINREQUEST_H_
