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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYRECORDBATCHV3REQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYRECORDBATCHV3REQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyRecordItem.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * ModifyRecordBatchV3请求参数结构体
                */
                class ModifyRecordBatchV3Request : public AbstractModel
                {
                public:
                    ModifyRecordBatchV3Request();
                    ~ModifyRecordBatchV3Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要修改的记录列表
                     * @return ModifyRecordList 需要修改的记录列表
                     * 
                     */
                    std::vector<ModifyRecordItem> GetModifyRecordList() const;

                    /**
                     * 设置需要修改的记录列表
                     * @param _modifyRecordList 需要修改的记录列表
                     * 
                     */
                    void SetModifyRecordList(const std::vector<ModifyRecordItem>& _modifyRecordList);

                    /**
                     * 判断参数 ModifyRecordList 是否已赋值
                     * @return ModifyRecordList 是否已赋值
                     * 
                     */
                    bool ModifyRecordListHasBeenSet() const;

                private:

                    /**
                     * 需要修改的记录列表
                     */
                    std::vector<ModifyRecordItem> m_modifyRecordList;
                    bool m_modifyRecordListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYRECORDBATCHV3REQUEST_H_
