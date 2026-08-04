/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYPARTITIONDESCRIPTIONREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYPARTITIONDESCRIPTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * ModifyPartitionDescription请求参数结构体
                */
                class ModifyPartitionDescriptionRequest : public AbstractModel
                {
                public:
                    ModifyPartitionDescriptionRequest();
                    ~ModifyPartitionDescriptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分区编码
                     * @return PartitionCode 分区编码
                     * 
                     */
                    std::string GetPartitionCode() const;

                    /**
                     * 设置分区编码
                     * @param _partitionCode 分区编码
                     * 
                     */
                    void SetPartitionCode(const std::string& _partitionCode);

                    /**
                     * 判断参数 PartitionCode 是否已赋值
                     * @return PartitionCode 是否已赋值
                     * 
                     */
                    bool PartitionCodeHasBeenSet() const;

                    /**
                     * 获取分区描述
                     * @return Description 分区描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置分区描述
                     * @param _description 分区描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 分区编码
                     */
                    std::string m_partitionCode;
                    bool m_partitionCodeHasBeenSet;

                    /**
                     * 分区描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYPARTITIONDESCRIPTIONREQUEST_H_
