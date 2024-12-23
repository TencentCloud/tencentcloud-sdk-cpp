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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPASUPPORTEDMETASRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPASUPPORTEDMETASRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/DSPAMetaType.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeDSPASupportedMetas返回参数结构体
                */
                class DescribeDSPASupportedMetasResponse : public AbstractModel
                {
                public:
                    DescribeDSPASupportedMetasResponse();
                    ~DescribeDSPASupportedMetasResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取支持的元数据类型
                     * @return Metas 支持的元数据类型
                     * 
                     */
                    std::vector<DSPAMetaType> GetMetas() const;

                    /**
                     * 判断参数 Metas 是否已赋值
                     * @return Metas 是否已赋值
                     * 
                     */
                    bool MetasHasBeenSet() const;

                    /**
                     * 获取最大支持每批次同步数量
                     * @return MaxDBInstanceLimit 最大支持每批次同步数量
                     * 
                     */
                    int64_t GetMaxDBInstanceLimit() const;

                    /**
                     * 判断参数 MaxDBInstanceLimit 是否已赋值
                     * @return MaxDBInstanceLimit 是否已赋值
                     * 
                     */
                    bool MaxDBInstanceLimitHasBeenSet() const;

                private:

                    /**
                     * 支持的元数据类型
                     */
                    std::vector<DSPAMetaType> m_metas;
                    bool m_metasHasBeenSet;

                    /**
                     * 最大支持每批次同步数量
                     */
                    int64_t m_maxDBInstanceLimit;
                    bool m_maxDBInstanceLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPASUPPORTEDMETASRESPONSE_H_
