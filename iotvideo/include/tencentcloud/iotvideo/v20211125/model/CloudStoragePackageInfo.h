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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_CLOUDSTORAGEPACKAGEINFO_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_CLOUDSTORAGEPACKAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * 云存套餐包信息
                */
                class CloudStoragePackageInfo : public AbstractModel
                {
                public:
                    CloudStoragePackageInfo();
                    ~CloudStoragePackageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取套餐包id
                     * @return PackageId 套餐包id
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置套餐包id
                     * @param _packageId 套餐包id
                     * 
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取套餐包名字
                     * @return PackageName 套餐包名字
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置套餐包名字
                     * @param _packageName 套餐包名字
                     * 
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                    /**
                     * 获取套餐包数量
                     * @return Num 套餐包数量
                     * 
                     */
                    int64_t GetNum() const;

                    /**
                     * 设置套餐包数量
                     * @param _num 套餐包数量
                     * 
                     */
                    void SetNum(const int64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                    /**
                     * 获取已使用数量
                     * @return UsedNum 已使用数量
                     * 
                     */
                    int64_t GetUsedNum() const;

                    /**
                     * 设置已使用数量
                     * @param _usedNum 已使用数量
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
                     * 套餐包id
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 套餐包名字
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * 套餐包数量
                     */
                    int64_t m_num;
                    bool m_numHasBeenSet;

                    /**
                     * 已使用数量
                     */
                    int64_t m_usedNum;
                    bool m_usedNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_CLOUDSTORAGEPACKAGEINFO_H_
