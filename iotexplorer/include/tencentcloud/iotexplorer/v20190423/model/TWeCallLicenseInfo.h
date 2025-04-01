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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TWECALLLICENSEINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TWECALLLICENSEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TWeCall信息
                */
                class TWeCallLicenseInfo : public AbstractModel
                {
                public:
                    TWeCallLicenseInfo();
                    ~TWeCallLicenseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取voip类型
                     * @return TWeCallType voip类型
                     * 
                     */
                    std::string GetTWeCallType() const;

                    /**
                     * 设置voip类型
                     * @param _tWeCallType voip类型
                     * 
                     */
                    void SetTWeCallType(const std::string& _tWeCallType);

                    /**
                     * 判断参数 TWeCallType 是否已赋值
                     * @return TWeCallType 是否已赋值
                     * 
                     */
                    bool TWeCallTypeHasBeenSet() const;

                    /**
                     * 获取总数
                     * @return TotalNum 总数
                     * 
                     */
                    int64_t GetTotalNum() const;

                    /**
                     * 设置总数
                     * @param _totalNum 总数
                     * 
                     */
                    void SetTotalNum(const int64_t& _totalNum);

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取已使用
                     * @return UsedNum 已使用
                     * 
                     */
                    int64_t GetUsedNum() const;

                    /**
                     * 设置已使用
                     * @param _usedNum 已使用
                     * 
                     */
                    void SetUsedNum(const int64_t& _usedNum);

                    /**
                     * 判断参数 UsedNum 是否已赋值
                     * @return UsedNum 是否已赋值
                     * 
                     */
                    bool UsedNumHasBeenSet() const;

                private:

                    /**
                     * voip类型
                     */
                    std::string m_tWeCallType;
                    bool m_tWeCallTypeHasBeenSet;

                    /**
                     * 总数
                     */
                    int64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * 已使用
                     */
                    int64_t m_usedNum;
                    bool m_usedNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TWECALLLICENSEINFO_H_
