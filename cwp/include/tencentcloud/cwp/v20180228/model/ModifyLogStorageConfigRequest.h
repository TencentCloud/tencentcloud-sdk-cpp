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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLOGSTORAGECONFIGREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLOGSTORAGECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyLogStorageConfig请求参数结构体
                */
                class ModifyLogStorageConfigRequest : public AbstractModel
                {
                public:
                    ModifyLogStorageConfigRequest();
                    ~ModifyLogStorageConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否修改有效期
                     * @return IsModifyPeriod 是否修改有效期
                     */
                    bool GetIsModifyPeriod() const;

                    /**
                     * 设置是否修改有效期
                     * @param IsModifyPeriod 是否修改有效期
                     */
                    void SetIsModifyPeriod(const bool& _isModifyPeriod);

                    /**
                     * 判断参数 IsModifyPeriod 是否已赋值
                     * @return IsModifyPeriod 是否已赋值
                     */
                    bool IsModifyPeriodHasBeenSet() const;

                    /**
                     * 获取存储类型，string数组
                     * @return Type 存储类型，string数组
                     */
                    std::vector<std::string> GetType() const;

                    /**
                     * 设置存储类型，string数组
                     * @param Type 存储类型，string数组
                     */
                    void SetType(const std::vector<std::string>& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取日志存储天数，3640表示不限
                     * @return Period 日志存储天数，3640表示不限
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置日志存储天数，3640表示不限
                     * @param Period 日志存储天数，3640表示不限
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                private:

                    /**
                     * 是否修改有效期
                     */
                    bool m_isModifyPeriod;
                    bool m_isModifyPeriodHasBeenSet;

                    /**
                     * 存储类型，string数组
                     */
                    std::vector<std::string> m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 日志存储天数，3640表示不限
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLOGSTORAGECONFIGREQUEST_H_
