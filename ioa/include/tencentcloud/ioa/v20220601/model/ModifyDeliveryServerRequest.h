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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_MODIFYDELIVERYSERVERREQUEST_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_MODIFYDELIVERYSERVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ioa/v20220601/model/DeliverServerItem.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * ModifyDeliveryServer请求参数结构体
                */
                class ModifyDeliveryServerRequest : public AbstractModel
                {
                public:
                    ModifyDeliveryServerRequest();
                    ~ModifyDeliveryServerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>编辑的数据内容</p>
                     * @return Data <p>编辑的数据内容</p>
                     * 
                     */
                    DeliverServerItem GetData() const;

                    /**
                     * 设置<p>编辑的数据内容</p>
                     * @param _data <p>编辑的数据内容</p>
                     * 
                     */
                    void SetData(const DeliverServerItem& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * <p>编辑的数据内容</p>
                     */
                    DeliverServerItem m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_MODIFYDELIVERYSERVERREQUEST_H_
