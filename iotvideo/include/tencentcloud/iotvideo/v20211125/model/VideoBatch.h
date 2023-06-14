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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_VIDEOBATCH_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_VIDEOBATCH_H_

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
                * 批次元数据
                */
                class VideoBatch : public AbstractModel
                {
                public:
                    VideoBatch();
                    ~VideoBatch() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取批次ID
                     * @return Id 批次ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置批次ID
                     * @param _id 批次ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取用户ID
                     * @return UserId 用户ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID
                     * @param _userId 用户ID
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取状态：1：待创建设备 2：创建中 3：已完成
                     * @return Status 状态：1：待创建设备 2：创建中 3：已完成
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态：1：待创建设备 2：创建中 3：已完成
                     * @param _status 状态：1：待创建设备 2：创建中 3：已完成
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取设备前缀
                     * @return DevPre 设备前缀
                     * 
                     */
                    std::string GetDevPre() const;

                    /**
                     * 设置设备前缀
                     * @param _devPre 设备前缀
                     * 
                     */
                    void SetDevPre(const std::string& _devPre);

                    /**
                     * 判断参数 DevPre 是否已赋值
                     * @return DevPre 是否已赋值
                     * 
                     */
                    bool DevPreHasBeenSet() const;

                    /**
                     * 获取设备数量
                     * @return DevNum 设备数量
                     * 
                     */
                    uint64_t GetDevNum() const;

                    /**
                     * 设置设备数量
                     * @param _devNum 设备数量
                     * 
                     */
                    void SetDevNum(const uint64_t& _devNum);

                    /**
                     * 判断参数 DevNum 是否已赋值
                     * @return DevNum 是否已赋值
                     * 
                     */
                    bool DevNumHasBeenSet() const;

                    /**
                     * 获取已创建设备数量
                     * @return DevNumCreated 已创建设备数量
                     * 
                     */
                    uint64_t GetDevNumCreated() const;

                    /**
                     * 设置已创建设备数量
                     * @param _devNumCreated 已创建设备数量
                     * 
                     */
                    void SetDevNumCreated(const uint64_t& _devNumCreated);

                    /**
                     * 判断参数 DevNumCreated 是否已赋值
                     * @return DevNumCreated 是否已赋值
                     * 
                     */
                    bool DevNumCreatedHasBeenSet() const;

                    /**
                     * 获取批次下载地址
                     * @return BatchURL 批次下载地址
                     * 
                     */
                    std::string GetBatchURL() const;

                    /**
                     * 设置批次下载地址
                     * @param _batchURL 批次下载地址
                     * 
                     */
                    void SetBatchURL(const std::string& _batchURL);

                    /**
                     * 判断参数 BatchURL 是否已赋值
                     * @return BatchURL 是否已赋值
                     * 
                     */
                    bool BatchURLHasBeenSet() const;

                    /**
                     * 获取创建时间。unix时间戳
                     * @return CreateTime 创建时间。unix时间戳
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间。unix时间戳
                     * @param _createTime 创建时间。unix时间戳
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间。unix时间戳
                     * @return UpdateTime 修改时间。unix时间戳
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置修改时间。unix时间戳
                     * @param _updateTime 修改时间。unix时间戳
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 批次ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 状态：1：待创建设备 2：创建中 3：已完成
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 设备前缀
                     */
                    std::string m_devPre;
                    bool m_devPreHasBeenSet;

                    /**
                     * 设备数量
                     */
                    uint64_t m_devNum;
                    bool m_devNumHasBeenSet;

                    /**
                     * 已创建设备数量
                     */
                    uint64_t m_devNumCreated;
                    bool m_devNumCreatedHasBeenSet;

                    /**
                     * 批次下载地址
                     */
                    std::string m_batchURL;
                    bool m_batchURLHasBeenSet;

                    /**
                     * 创建时间。unix时间戳
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间。unix时间戳
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_VIDEOBATCH_H_
