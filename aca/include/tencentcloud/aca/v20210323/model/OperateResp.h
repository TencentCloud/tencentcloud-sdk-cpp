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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_OPERATERESP_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_OPERATERESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 操作结果
                */
                class OperateResp : public AbstractModel
                {
                public:
                    OperateResp();
                    ~OperateResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作结果
                     * @return Dummy 操作结果
                     * 
                     */
                    bool GetDummy() const;

                    /**
                     * 设置操作结果
                     * @param _dummy 操作结果
                     * 
                     */
                    void SetDummy(const bool& _dummy);

                    /**
                     * 判断参数 Dummy 是否已赋值
                     * @return Dummy 是否已赋值
                     * 
                     */
                    bool DummyHasBeenSet() const;

                private:

                    /**
                     * 操作结果
                     */
                    bool m_dummy;
                    bool m_dummyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_OPERATERESP_H_
