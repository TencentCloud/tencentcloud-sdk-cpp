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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CHECKDATAENGINEIMAGECANBEROLLBACKRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CHECKDATAENGINEIMAGECANBEROLLBACKRESPONSE_H_

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
                * CheckDataEngineImageCanBeRollback返回参数结构体
                */
                class CheckDataEngineImageCanBeRollbackResponse : public AbstractModel
                {
                public:
                    CheckDataEngineImageCanBeRollbackResponse();
                    ~CheckDataEngineImageCanBeRollbackResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取回滚后日志记录id
                     * @return ToRecordId 回滚后日志记录id
                     * 
                     */
                    std::string GetToRecordId() const;

                    /**
                     * 判断参数 ToRecordId 是否已赋值
                     * @return ToRecordId 是否已赋值
                     * 
                     */
                    bool ToRecordIdHasBeenSet() const;

                    /**
                     * 获取回滚前日志记录id
                     * @return FromRecordId 回滚前日志记录id
                     * 
                     */
                    std::string GetFromRecordId() const;

                    /**
                     * 判断参数 FromRecordId 是否已赋值
                     * @return FromRecordId 是否已赋值
                     * 
                     */
                    bool FromRecordIdHasBeenSet() const;

                    /**
                     * 获取是否能够回滚
                     * @return IsRollback 是否能够回滚
                     * 
                     */
                    bool GetIsRollback() const;

                    /**
                     * 判断参数 IsRollback 是否已赋值
                     * @return IsRollback 是否已赋值
                     * 
                     */
                    bool IsRollbackHasBeenSet() const;

                private:

                    /**
                     * 回滚后日志记录id
                     */
                    std::string m_toRecordId;
                    bool m_toRecordIdHasBeenSet;

                    /**
                     * 回滚前日志记录id
                     */
                    std::string m_fromRecordId;
                    bool m_fromRecordIdHasBeenSet;

                    /**
                     * 是否能够回滚
                     */
                    bool m_isRollback;
                    bool m_isRollbackHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CHECKDATAENGINEIMAGECANBEROLLBACKRESPONSE_H_
