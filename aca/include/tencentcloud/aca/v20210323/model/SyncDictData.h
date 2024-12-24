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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_SYNCDICTDATA_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_SYNCDICTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aca/v20210323/model/Dict.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 同步字典数据
                */
                class SyncDictData : public AbstractModel
                {
                public:
                    SyncDictData();
                    ~SyncDictData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取医院ID
                     * @return HospitalId 医院ID
                     * 
                     */
                    std::string GetHospitalId() const;

                    /**
                     * 设置医院ID
                     * @param _hospitalId 医院ID
                     * 
                     */
                    void SetHospitalId(const std::string& _hospitalId);

                    /**
                     * 判断参数 HospitalId 是否已赋值
                     * @return HospitalId 是否已赋值
                     * 
                     */
                    bool HospitalIdHasBeenSet() const;

                    /**
                     * 获取字典类型 1-给药频次 2-给药途径 3-科室 4-诊断
                     * @return DictType 字典类型 1-给药频次 2-给药途径 3-科室 4-诊断
                     * 
                     */
                    int64_t GetDictType() const;

                    /**
                     * 设置字典类型 1-给药频次 2-给药途径 3-科室 4-诊断
                     * @param _dictType 字典类型 1-给药频次 2-给药途径 3-科室 4-诊断
                     * 
                     */
                    void SetDictType(const int64_t& _dictType);

                    /**
                     * 判断参数 DictType 是否已赋值
                     * @return DictType 是否已赋值
                     * 
                     */
                    bool DictTypeHasBeenSet() const;

                    /**
                     * 获取字典数据
                     * @return Dicts 字典数据
                     * 
                     */
                    std::vector<Dict> GetDicts() const;

                    /**
                     * 设置字典数据
                     * @param _dicts 字典数据
                     * 
                     */
                    void SetDicts(const std::vector<Dict>& _dicts);

                    /**
                     * 判断参数 Dicts 是否已赋值
                     * @return Dicts 是否已赋值
                     * 
                     */
                    bool DictsHasBeenSet() const;

                private:

                    /**
                     * 医院ID
                     */
                    std::string m_hospitalId;
                    bool m_hospitalIdHasBeenSet;

                    /**
                     * 字典类型 1-给药频次 2-给药途径 3-科室 4-诊断
                     */
                    int64_t m_dictType;
                    bool m_dictTypeHasBeenSet;

                    /**
                     * 字典数据
                     */
                    std::vector<Dict> m_dicts;
                    bool m_dictsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_SYNCDICTDATA_H_
